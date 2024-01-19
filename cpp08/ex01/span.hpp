#ifndef SPAN_HPP
#define SPAN_HPP
# include <iostream>
# include <string>
#include<vector>
#include<algorithm>
#include<math.h>

class Span{
   private:
   unsigned int N;
   std::vector<int> vect;
    public :
    Span();
   Span(unsigned int n){
    n=N;
   };
    Span(Span const &o);
    Span& operator=(const Span& o);
    
class ValeurFound : public std::exception {
            public:
                virtual const char* what() const throw() {
                     return "You pass the limit of the vectore";
                }
        };
class EmptyVector : public std::exception {
            public:
                virtual const char* what() const throw() {
                     return "Empty vector please fill the vector";
                }
        };

void longestSpan();
void  shortestSpan();
void addNumber(int number);

void range_addNumber(std::vector<int>& vec);

~Span();

};
#endif