#include"span.hpp"
int main()
{
   try
   {
    Span k;
    k.range_addNumber(8);
    k.longestSpan();
    k.shortestSpan();
   }
 catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}