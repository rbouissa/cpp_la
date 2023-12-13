#include"Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat k("simo",0);
        std::cout<<"grade is in the good range"<<std::endl;
    }
    catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout<< "Exception caught: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e) {
       
        std::cout<< "Exception caught: " << e.what() << std::endl;
    }
}