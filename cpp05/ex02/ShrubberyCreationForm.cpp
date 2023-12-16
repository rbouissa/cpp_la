#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(std::string n, const int gs, const int ge, bool sd)
    : signd(145), gradetoexuc(137), gradetosing(ge), name(n)
{
    if (gradetoexuc < 1 || gradetosing < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (gradetoexuc > 150 || gradetosing > 150)
        throw Bureaucrat::GradeTooLowException();
}


void ShrubberyCreationForm :: beSigned(Bureaucrat& br)
{
    if (br.getGrade() > gradetosing)
        throw Bureaucrat::GradeTooLowException();
    signd = true;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout<<"RobotomyRequestForm Deconstructor Called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(): signd(false), gradetoexuc(0), gradetosing(0), name(NULL)
{
    std::cout<<"RobotomyRequestForm Constructor Called"<<std::endl;
}