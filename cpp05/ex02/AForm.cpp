#include"AForm.hpp"
#include"Bureaucrat.hpp"
void AForm :: beSigned(Bureaucrat& br)
{
    if (br.getGrade() > gradetosing)
        throw Bureaucrat::GradeTooLowException();
    signd = true;
}
AForm::~AForm()
{
    std::cout<<"AForm Deconstructor Called"<<std::endl;
}

AForm::AForm(): signd(false), gradetoexuc(0), gradetosing(0), name(NULL)
{
    
    std::cout<<"AForm Constructor Called"<<std::endl;
}

AForm::AForm(AForm &k):gradetoexuc(k.gradetoexuc), gradetosing(k.gradetosing), name(k.name)
{
    *this = k;
}

AForm::AForm(std::string n, const int gs, const int ge, bool sd)
    : signd(sd), gradetoexuc(gs), gradetosing(ge), name(n)
{
    if (gradetoexuc < 1 || gradetosing < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (gradetoexuc > 150 || gradetosing > 150)
        throw Bureaucrat::GradeTooLowException();
}
std::  ostream &operator<<(std::ostream &o, AForm const &h)
{
     o << "Our Form Details is" << std::endl;
    o << "The name of it :  " << h.getName() << std::endl
      << "Sign grade : " << h.getgradetosing() << std::endl
      << "Execute grade : " << h.gradetoexuct()<<std::endl;
    return (o);
}

const char *	AForm::GradeTooHighException::what() const throw() {
    return "GradeTooHighException";
}

const char *	AForm::GradeTooLowException::what() const throw()
{
    return "GradeTooLowException";
}

AForm &AForm :: operator=(const AForm& o)
{
    if(this != &o)
    {
       std::cout <<"Copy assignment operator called"<<std::endl;
       signd=o.signd;
    }
    return *this;
}
const char *	AForm::NotSignedException::what() const throw() {
	return ("Form not signed!");
}

std::string AForm::getName() const
{
    return name;
}

bool AForm::getSignd() const{
    return signd;
}

int AForm::getgradetosing() const
{
    return gradetosing;
}

int AForm::gradetoexuct()const{
    return gradetoexuc;
}