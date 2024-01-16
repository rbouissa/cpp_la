#ifndef PMERGE_HPP
#define PMERGE_HPP
# include <iostream>
# include <string>
#include<algorithm>
#include <fstream>
#include <time.h>
#include<stdlib.h>
#include <vector>
struct Mystruct{
        int min;
        int max;
};
class Pmerge{
private:
         std::vector<int> myVector;
          std::vector<Mystruct> VectorStr;
        public:
    Pmerge();
    Pmerge(const Pmerge &o);
    Pmerge& operator=(const Pmerge& o);
    ~Pmerge();
    void ParsPmerge(char** av);
    void fill_stack(char** av);
    void process_expression(std::string str);
    void fill_second_stack();
    class InvalidIndex : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif