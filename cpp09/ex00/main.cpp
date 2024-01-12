# include <iostream>
# include <string>
#include<vector>
#include<algorithm>
#include <fstream>
int check_value(std::string val)
{
    double value=std::atof(val.c_str());
    std::cout<<value<<std::endl;
    if(val[0]!=' ')
        return 0;
    while((val[0]!=' ' && !isdigit(val[i])&&  val[i]!='.'))
        i++;
     while((val[0]!=' ' && !isdigit(val[i])&&  val[i]!='.'))
    else if(value>1000||value<0)
    {
    return 0;
    }
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
                // std::cout<<date<<std::endl;
                // std::cout<<value<<std::endl;
            }
            if(!check_value(value))
                 std::cout<<"invalid map"<<std::endl;
            //check_date(value);
    }
}



// int check_date(std::string date)
// {

// }
