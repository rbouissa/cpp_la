#include"easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> vect;
       
        vect.push_back(100);
      
        vect.push_back(1200); 
        
        vect.push_back(1300); 
      
        vect.push_back(1300);
        vect.push_back(1300);

        std::cout << "cap = " << vect.capacity() << std::endl;
        std::cout << "cap = " << vect.size() << std::endl;
        easyfind(vect, 100);
        easyfind(vect, 100);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}