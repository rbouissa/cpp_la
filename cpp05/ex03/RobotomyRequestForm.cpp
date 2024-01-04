#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm(const std::string& trg):AForm( "RobotomyRequestForm",72,45,false),target(trg)
{

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
     if(executor.getGrade()  > 145 && executor.getGrade() > 137)
     {
          if ( this->getSignd() == false )
        throw AForm::GradeTooLowException();
    if ( executor.getGrade() > this->gradetoexuct() ) {
        throw AForm::GradeTooLowException();
        std::cout<<target<<" has been robotomized successfully "<<std::endl;
     }
     else
        std::cout<<" the robotomy failed"<<std::endl;
     }
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout<<"RobotomyRequestForm Deconstructor Called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(): target(NULL)
{    
    std::cout<<"RobotomyRequestForm Constructor Called"<<std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& o)
{
    (void)o;
    return *this;
}
 