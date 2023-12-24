#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"Intern.hpp"
int main()
{
Intern someRandomIntern;
AForm* rrf;
rrf = someRandomIntern.makeForm("robotomy request", "Bender");
delete rrf;
//return 0;
//    try {
//         Bureaucrat bureaucrat("mm", 26);
//         ShrubberyCreationForm f1("home");
//         RobotomyRequestForm f2("robotic");
//         PresidentialPardonForm f3("hospital");
//         std::cout << "--------------Shrubbery-------------" << std::endl;
//         bureaucrat.signForm(f1);
//         bureaucrat.executeForm(f1);
//         std::cout << "---------------Robotomy ------------" << std::endl;
//         bureaucrat.signForm(f2);
//         bureaucrat.executeForm(f2);
//         bureaucrat.executeForm(f2);
//         bureaucrat.executeForm(f2);
//         bureaucrat.executeForm(f2);
//         std::cout << "------------President---------------" << std::endl;
//         bureaucrat.signForm(f3);
//         bureaucrat.executeForm(f3);
//     }
//     catch (std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
}