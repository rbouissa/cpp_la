#include"span.hpp"

Span::~Span()
{
    std::cout<<"Span Deconstructor Called"<<std::endl;
}

Span::Span()
{
    std::cout<<"Span Constructor Called"<<std::endl;
}


Span::Span(const Span &o)
{
    *this = o;
}
Span &Span :: operator=(const Span& o)
{
    if(this != &o)
    {
       std::cout <<"Copy assignment operator called"<<std::endl;
      
	   
    }
    return *this;
}

void Span :: longestSpan()
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
void Span:: shortestSpan() 
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
void Span::addNumber(int number)
{
    if(vect.size()<N)
        throw ValeurFound();
    else
        vect.push_back(number);
}
void Span::range_addNumber(std::vector<int>& vec)
{
    if (vec.size() + vect.size() >= N)
        throw ValeurFound();
    vect.insert(vect.end(), vec.begin(), vec.end());
}
// const char *	Span::ValeurFound::what() const throw() {
//     return "valeur is alraedy in our container";
// }