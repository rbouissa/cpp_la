#include "RPN.hpp"
int main(int ac,char **av)
{
    try{
    if(ac!=2)
    {
        std::cout<<"ERROR:Bad arguments"<<std::endl;
        exit(1);
    }
    RPN rpn;
    rpn.process_expression(av[1]);
    }
     catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

return 0;
}