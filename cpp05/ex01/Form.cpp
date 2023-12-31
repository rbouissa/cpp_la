#include"Form.hpp"
#include"Bureaucrat.hpp"
void Form :: beSigned(Bureaucrat& br)
{
    if (br.getGrade() > gradetosing)
        throw Bureaucrat::GradeTooLowException();
    signd = true;
}
Form::~Form()
{
    std::cout<<"Form Deconstructor Called"<<std::endl;
}

Form::Form(): signd(false), gradetoexuc(0), gradetosing(0), name(NULL)
{
    
    std::cout<<"Form Constructor Called"<<std::endl;
}

Form::Form(Form &k):gradetoexuc(k.gradetoexuc), gradetosing(k.gradetosing), name(k.name)
{
    *this = k;
}

Form::Form(std::string n, const int gs, const int ge, bool sd)
    : signd(sd), gradetoexuc(gs), gradetosing(ge), name(n)
{
    if (gradetoexuc < 1 || gradetosing < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (gradetoexuc > 150 || gradetosing > 150)
        throw Bureaucrat::GradeTooLowException();
}

Form &Form :: operator=(const Form& o)
{
    if(this != &o)
    {
       std::cout <<"Copy assignment operator called"<<std::endl;
       signd=o.signd;
    }
    return *this;
}
const char *	Form::GradeTooHighException::what() const throw() {
    return "GradeTooHighException";
}

const char *	Form::GradeTooLowException::what() const throw()
{
    return "GradeTooLowException";
}