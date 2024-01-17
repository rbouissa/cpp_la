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

// const char *	Span::ValeurFound::what() const throw() {
//     return "valeur is alraedy in our container";
// }