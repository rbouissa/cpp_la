#ifndef PMERGE_HPP
#define PMERGE_HPP
# include <iostream>
# include <string>
#include<algorithm>
#include <fstream>
#include <time.h>
#include<ctime>
#include<stdlib.h>
#include <vector>
#include <deque>
struct Mystruct{
        int min;
        int max;
};
class Pmerge{
private:
        std::vector<int> myVector;
        std::deque<int> myVector_deque;
        public:
    Pmerge();
    Pmerge(const Pmerge &o);
    Pmerge& operator=(const Pmerge& o);
    ~Pmerge();
    void use_recursion(size_t index);
    void ParsPmerge(char** av);
    void fill_stack(char** av);
    void process_expression(std::string str);
    void fill_second_stack();
    void mergeSort(std::vector<std::pair<int, int> >& vec, int l, int r);
	void merge(std::vector<std::pair<int, int> >& vec, int l, int m, int r);
    class InvalidIndex : public std::exception {
            public:
                virtual const char* what() const throw();
        };
    void printVecVec(const std::vector<std::vector<std::pair<int, int> > > &vec);
    void printVecVec_deque(const std::deque<std::vector<std::pair<int, int> > > &vec);
    void fill_stack_deque(char** av);
    void process_expression_deque(std::string str);
    void fill_second_stack_deque();
    void mergeSort_deque(std::deque<std::pair<int, int> >& vec, int l, int r);
	void merge_deque(std::deque<std::pair<int, int> >& vec, int l, int m, int r);
};

#endif