#ifndef EASY_HPP
#define EASY_HPP
# include <iostream>
# include <string>
#include<vector>
#include<algorithm>
#include <fstream>
#include <time.h>
#include<map>
#include<stdlib.h>
#include<stack>
class RPN{
private:
         std::stack<int> myStack;
        public:
   RPN();
    RPN(const RPN &o);
    RPN& operator=(const RPN& o);
    ~RPN();
    int add(int a,int b);
    int mult(int a,int b);
    int div(int a,int b);
    int  moin(int a,int b);
    void process_expression(std::string str);
   class InvalidNumber : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif