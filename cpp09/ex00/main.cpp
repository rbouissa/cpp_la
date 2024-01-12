# include <iostream>
# include <string>
#include<vector>
#include<algorithm>
#include <fstream>
int main()
{
     std::ifstream inputFile("txt.file");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file: " <<  std::endl;
        return 1; 
    }
    //read_line by line
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
        // try{
            std::string tmp;
            i=0;
            if(line[10]!= " " || line[10] != " "||line[11]!="|"||line[4]!="-"||line[7]!="-")
                    std::cout<<"invalid map"<<std::endl;
            while(line[i]!="|")
            {
                tmp[i]=line[i];
                i++;
            }

        // }
        // catch(std::exception &e)
        // {

        // }
        //file =file+line+"\n";
    }

    // if(getline(file)!="date | value")
    // {
    //     exit(1);

    // }
    int i=0;
    std::string ln;
    while(file[i])
    {
        ln =Null;
        while(file[i]!="\n")
        {
            ln =file[i];
        }
        l
    }
    std::cout<<file<<std::endl;
    // i=0;
    // while(file[i])
    // {
    //     std::cout<<file[i];
    //     i++;
    // }
}
int check_int(std::string s)
{
    
    while(s[i])
    {
        if(s[i]<="0"&&s[i]>="9")
        i++;
    else
        return 0;
    }
    return 1
}
int check_date(std::string s)
{
    int i=0;
    std::string tmp;
   while(s[i])
   {
    

   }
}