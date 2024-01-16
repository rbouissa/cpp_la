#include"PmergeMe.hpp"
int main(int ac,char **av)
{
   if(ac!=2)
    {
        std::cout<<"ERROR:Bad arguments"<<std::endl;
        exit(1);
    }
    try{
        Pmerge p;
        p.ParsPmerge(av[1]);
    }
     catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}