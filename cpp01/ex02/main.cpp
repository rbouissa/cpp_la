
#include <iostream>
#include<string.h>
int main()
{
    std::string n = "HI THIS IS BRAIN";
    std::string *stringPTR = &n;
    std::string& stringREF = n;
    //The memory address of the string variable.

    std::cout<<"The memory address of the string variable: " << &n <<"."<<std::endl;
     std::cout<<" The memory address held by stringPTR: " << stringPTR <<"."<<std::endl;
     std::cout<<"The memory address held by stringREF: "<<&stringREF<<"."<<std::endl;

        std::cout<<"The value of the string variable: " << n <<"."<<std::endl;
     std::cout<<" The value pointed to by stringPTR:  " << *stringPTR <<"."<<std::endl;
     std::cout<<" The value pointed to by stringREF: "<<stringREF<<"."<<std::endl;
}