#include"Harl.hpp"
int main(int argc,char **argv)
{
     if(argc!=2)
    {
        std::cout<<"Please enter an argument like (DEBUG ,ERROR,INFO,WARNING)"<<std::endl;
        return 0;
    }
    Harl newh;
    newh.complain(argv[1]);
    return 0;
}