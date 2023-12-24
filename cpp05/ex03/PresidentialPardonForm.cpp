#include"PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm(const std::string& trg):AForm( "PresidentialPardonForm",25,5,false),target(trg)
{

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
     if(executor.getGrade()  > 25 && executor.getGrade() > 5)
     {
          if ( this->getSignd() == false )
        throw AForm::GradeTooLowException();
    if ( executor.getGrade() > this->gradetoexuct() ) {
        throw AForm::GradeTooLowException();
        std::cout<<target<<"has been pardoned by Zaphod Beeblebrox"<<std::endl;
     }
     else
        std::cout<<"the presidentiale failed"<<std::endl;
     }
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout<<"PresidentialPardonForm Deconstructor Called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(): target(NULL)
{   
    std::cout<<"PresidentialPardonForm Constructor Called"<<std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& o)
{
    (void)o;
    return *this;
}