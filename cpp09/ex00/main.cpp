// # include <iostream>
// # include <string>
// #include<vector>
// #include<algorithm>
// #include <fstream>
// #include <time.h>
// int check_value(std::string val)
// {
//     double value=std::atof(val.c_str());
//     std::cout<<value<<std::endl;
//     int i=0;
//     int point=0;
//     int space=0;
//     if(val[0]!=' '||!isdigit(val[1]))
//         return 0;
//     while(val[i]|| isdigit(val[i])||val[i]=='.')
//     {
//         if(val[i]=='.')
//             point++;
//         else if(val[i]==' ')
//             space++;
//         i++;
//     }
//     if(val[i]=='\0'&&val[i-1]=='.')
//         return 0;
//     else  if((val[0]!=' ' && !isdigit(val[i])))
//         return 0;
//     else if(value>1000 || value<0) 
//         return 0;
//     else if(space>1||point>1)
//         return 0;
//     else
//         return 1;
// }

// int check_date(std::string date)
// {
//     struct tm tms;
//     if(!strptime(date.c_str(),"%Y-%m-%d",&tms))
//         return 0;
//     int day = tms.tm_mday;
//     int year=tms.tm_year;
//     int month = tms.tm_mon;
//    if (day > 31)
//        // throw(std::runtime_error("Error: bad input => " + key));
//     return 0;
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//     {
//         if (month == 2 && day > 29)
//         return 0;
//             // throw(std::runtime_error("Error: bad input => " + key));
//         if (month % 2 == 0 && day > 30)
//         return 0;
//             // throw(std::runtime_error("Error: bad input => " + key));
//     }
//     else if ((month == 2 && day > 28) || (month % 2 == 0 && day > 30))
//         return 0;
//     return 1;

// }
#include"BitcoinExchange.hpp"
int main(int ac ,char **av)
{
    if(ac != 2)
    {
        std::cout<<"Error: Couldn't open file."<<std::endl;
        return(0);
    }
    BitcoinExchange b;
    std::ifstream inputFile(av[1]);
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file: " <<  std::endl;
        return 1; 
    }
    std::string line;
    std::string file;
    //int i=0; 
    std::getline(inputFile,line);
    if(line != "date | value")
    { 
        std::cout << "Error: invalid file format" << std::endl;
        exit(1);
    }
    while (std::getline(inputFile, line)) 
    {      
        std::size_t found = line.find("|");
        std::string value;
        std::string date;
       // i=0;
        if(line[10] != ' '&&line[11] != '|'&&line[4]!='-'&&line[7]!='-')
        {
            std::cout<<"invalid map"<<std::endl;
            exit(1);
        }
        if (found!=std::string::npos)
            {
                date.insert (0,line,0,found);
                value.insert(0,line,found+1,line.length()-1);
            }
            b.fill_data_map();
        b.check_date(date);
        b.check_value(value,date);
        
        }
    }



// int check_date(std::string date)
// {

// }
