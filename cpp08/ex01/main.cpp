#include"span.hpp"
int main()
{
   try{
     srand(time(NULL));
   std::vector<int>vect(200);
  std::generate(vect.begin(),vect.end(),std::rand);
  Span k(vect.size());

for(size_t i=0;i<vect.size();i++)
            k.addNumber(vect[i]);
        k.longestSpan();
        k.shortestSpan();
   }
 catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}