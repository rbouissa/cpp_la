#include"easyfind.hpp"

int main()
{
    try{
   std::vector<int>vect;
   vect.push_back(100);
   vect.push_back(1200);
   vect.push_back(1300);
    easyfind(vect, 10);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}