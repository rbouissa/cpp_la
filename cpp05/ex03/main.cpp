#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"Intern.hpp"
int main()
{
    
    Intern it;
        AForm *k=it.makeForm("ShrubberyCreationForm","marathon");
       // 

   try {
       const Bureaucrat bureaucrat("David goggins", 26);
        std::cout << *k << std::endl;
        bureaucrat.signForm(*k);
        bureaucrat.executeForm(*k);
        delete k;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}