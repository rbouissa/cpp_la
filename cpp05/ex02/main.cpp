#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
int main()
{
   try {
        Bureaucrat bureaucrat("David goggins", 26);
        ShrubberyCreationForm f1("marathon");
        RobotomyRequestForm f2("pull up");
        PresidentialPardonForm f3("Bench press");
        std::cout << "Shrubbery" << std::endl;
        bureaucrat.signForm(f1);
        bureaucrat.executeForm(f1);
        std::cout << "RobotomyRequest" << std::endl;
        bureaucrat.signForm(f2);
        bureaucrat.executeForm(f2);
        bureaucrat.executeForm(f2);
        bureaucrat.executeForm(f2);
        bureaucrat.executeForm(f2);
        std::cout << "The Strongest Person In This World" << std::endl;
        bureaucrat.signForm(f3);
        bureaucrat.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}