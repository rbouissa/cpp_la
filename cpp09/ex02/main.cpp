#include"PmergeMe.hpp"
int main(int ac,char **av)
{
   if(ac < 2)
    {
        std::cout<<"ERROR:Bad arguments"<<std::endl;
        exit(1);
    }
    try{
        Pmerge p;
        p.ParsPmerge(av);
        clock_t start_vector = clock();
        p.fill_stack(av);
        p.fill_second_stack();
        clock_t end_vector = clock();
        std::cout<<"-----------------------------------------------"<<std::endl;
        // p.ParsPmerge_deque(av);
        clock_t start_deque = clock();
        p.fill_stack_deque(av);
        p.fill_second_stack_deque();
        clock_t end_deque = clock();
       std::cout<<"Time to process a range of 3000 elements with std::[vector] : "<<end_vector-start_vector<<"us"<<std::endl;
       std::cout<<"Time to process a range of 3000 elements with std::[deque] : "<<end_deque-start_deque<<"us"<<std::endl;
    }
     catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}