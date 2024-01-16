#ifndef PMERGE_HPP
#define PMERGE_HPP
# include <iostream>
# include <string>
#include<algorithm>
#include <fstream>
#include <time.h>
#include<stdlib.h>
#include <vector>
class Pmerge{
private:
         std::vector<int> myVector;
        public:
    Pmerge();
    Pmerge(const Pmerge &o);
    Pmerge& operator=(const Pmerge& o);
    ~Pmerge();
    void ParsPmerge(std::string av);
    void process_expression(std::string str);
    class InvalidIndex : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif