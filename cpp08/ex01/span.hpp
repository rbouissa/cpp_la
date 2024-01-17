#ifndef SPAN_HPP
#define SPAN_HPP
# include <iostream>
# include <string>
#include<vector>
#include<algorithm>
#include<math.h>

class Span{
   private:
   //unsigned int N;
   std::vector<int> vect;
    public :
    Span();
   // Span(unsigned int N);
    Span(Span const &o);
    Span& operator=(const Span& o);
    
class ValeurFound : public std::exception {
            public:
                virtual const char* what() const throw() {
                     return "valeur is alraedy in our container";
                }
        };
class EmptyVector : public std::exception {
            public:
                virtual const char* what() const throw() {
                     return "Empty vector pleas fill the vector";
                }
        };

void longestSpan()
{
    int longest;
    longest = 0;
    if(!vect.empty())
    {
        int max = *std::max_element(vect.begin(), vect.end());
        int min = *std::min_element(vect.begin(), vect.end());
        std::cout<<"the longest span in this vector is , "<<max-min<<std::endl;
    }
    else
        throw EmptyVector();
}

void  shortestSpan() 
{
  if (!vect.empty())
  {
    int shortest;
    std::vector<int> sortedVec;
    sortedVec = vect;
    std::sort(sortedVec.begin(), sortedVec.end());
    shortest = sortedVec[1] - sortedVec[0];
    for (unsigned int i = 2;  i < sortedVec.size(); i++) {
        shortest = std::min(shortest, sortedVec[i] - sortedVec[i - 1]);
  }
    std::cout<<"the shortest span in this vector is :"<<shortest<<std::endl;
  }
  else
    throw EmptyVector();
}

void addNumber(int number)
{
    if(std::find(vect.begin(),vect.end(),number)!= vect.end())
        throw ValeurFound();
    else
        vect.push_back(number);
}

int getRandomNumber(int min, int max) {
    return min + std::rand() % (max - min + 1);
}

void range_addNumber(int range)
{
  srand(time(NULL));
    std::vector<int> vect(range);
    for(int i=0;i<range;i++)
    {
        // std::cout<<"===>"<<std::rand()<<std::endl;
        vect[i]=getRandomNumber(2,40);
        std::cout<<"vect[i]====>"<<vect[i]<<std::endl;
    }
for(size_t i=0;i<vect.size();i++)
            addNumber(vect[i]);
}

~Span();

};
#endif