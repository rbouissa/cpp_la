#include"span.hpp"
int main()
{
   try
   {
    Span k(2);
    int arr[] = {0, -5, -88, -13, -1373, 13, 1337, -2, 2, 99, 4};
	std::vector<int> vec(arr, arr + (sizeof(arr) / sizeof(int)) - sizeof(int));	
    std::vector<int>::iterator itb = vec.begin();
    std::vector<int>::iterator ite = vec.end();
    while(itb != ite)
    {
        std::cout << *itb << "  ";
        itb++;
    }
    std::cout << std::endl;
    // k.range_addNumber(vec);
    // k.longestSpan();
    // k.shortestSpan();
   }
 catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}