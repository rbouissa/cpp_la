# include <iostream>
# include <string>
#include<vector>
#include<algorithm>
#include <fstream>
#include <time.h>
int check_value(std::string val)
{
    double value=std::atof(val.c_str());
    std::cout<<value<<std::endl;
    int i=0;
    int point=0;
    int space=0;
    if(val[0]!=' ')
        return 0;
    while(val[i]|| isdigit(val[i])||val[i]=='.')
    {
        if(val[i]=='.')
            point++;
        else if(val[i]==' ')
            space++;
        i++;
    }
     if((val[0]!=' ' && !isdigit(val[i])&&  val[i]!='.'))
        return 0;
    else if(value>1000 || value<0) 
    return 0;
else if(space>1||point>1)
return 0;
    else
    return 1;
}

int check_date(std::string date)
{
    struct tm tms;
    if(!strptime(date.c_str(),"%Y-%m-%d",&tms))
        return 0;
    int dayy = tms.tm_mday;
    int yearr=tms.tm_year;
    int monthh = tms.tm_mon;
   if (dayy > 31)
       // throw(std::runtime_error("Error: bad input => " + key));
    return 0;
    if ((yearr % 4 == 0 && yearr % 100 != 0) || (yearr % 400 == 0))
    {
        if (monthh == 2 && dayy > 29)
        return 0;
            // throw(std::runtime_error("Error: bad input => " + key));
        if (monthh % 2 == 0 && dayy > 30)
        return 0;
            // throw(std::runtime_error("Error: bad input => " + key));
    }
    else if ((monthh == 2 && dayy > 28) || (monthh % 2 == 0 && dayy > 30))
        return 0;
    return 1;

}

int main()
{
     std::ifstream inputFile("txt.file");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file: " <<  std::endl;
        return 1; 
    }
    std::string line;
    std::string file;
    int i=0; 
    std::getline(inputFile,line);
    if(line != "date | value")
    { 
        std::cout << "Error: invalid file format" << std::endl;
        exit(1);
    }
    while (std::getline(inputFile, line)) {        
std::size_t found = line.find("|");
            std::string value;
            std::string date;
            i=0;
            if(line[10] != ' '&&line[11] != '|'&&line[4]!='-'&&line[7]!='-')
                    std::cout<<"invalid map"<<std::endl;
         if (found!=std::string::npos)
            {
                date.insert (0,line,0,found);
                value.insert(0,line,found+1,line.length()-1);
            }
            if(!check_value(value))
                 std::cout<<"invalid map"<<std::endl;
            if(!check_date(date))
                std::cout<<"invalid map"<<std::endl;
    }
}



// int check_date(std::string date)
// {

// }
