
#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
void PresidentialPardonForm :: beSigned(Bureaucrat& br)
{
    if (br.getGrade() > gradetosing)
        throw Bureaucrat::GradeTooLowException();
    signd = true;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout<<"PresidentialPardonForm Deconstructor Called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(): signd(false), gradetoexuc(0), gradetosing(0), name(NULL)
{
    
    std::cout<<"PresidentialPardonForm Constructor Called"<<std::endl;
}