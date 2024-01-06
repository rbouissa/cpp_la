#ifndef EASY_HPP
#define EASY_HPP
# include <iostream>
# include <string>
#include<vector>
#include<algorithm>

class ValeurNotFound: public std::exception {
            public:
                virtual const char* what() const throw(){
                    return "valeur not found";
                } 
        };
template<typename T>
void easyfind(T &p, int g)
{
    if(std::find(p.begin(),p.end(),g)!= p.end())
        std::cout<<"valeuris found inside the template"<<std::endl;
    else
        throw ValeurNotFound();
}
#endif