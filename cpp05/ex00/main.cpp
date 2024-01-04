#include"Bureaucrat.hpp"


int main( void )
{
    try 
    {
        int count = 0;
        Bureaucrat bureaucrat("Goggins", 1);
        std::cout << bureaucrat << std::endl;
        while(1)
        {
            std::cout<<bureaucrat.getGrade()<<std::endl;
            bureaucrat.decrementgrade();
            count++;
        }
    } 
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}