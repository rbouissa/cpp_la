#include"Bureaucrat.hpp"

int main( void )
{

    try {
        Bureaucrat bureaucrat("goggins",1);
        Form form("you cant't hurt me book", 7);
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        while(1)
            bureaucrat.incrementgrade();
        std::cout<<"--------"<<std::endl; 
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}