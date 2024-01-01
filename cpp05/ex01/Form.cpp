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

Form::Form(std::string n, const int gs)
    :gradetoexuc(0),  gradetosing(gs), name(n)
{
    std::cout<<gs<<std::endl;
    if (gradetosing < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (gradetosing > 150)
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
std::  ostream &operator<<(std::ostream &o, Form const &h)
{
     o << "Our Form Details is" << std::endl;
    o << "The name of it :  " << h.getName() << std::endl
      << "Sign grade : " << h.getgradetosing() << std::endl
      << "Execute grade : " << h.gradetoexuct();
    return (o);
}
std::string Form::getName() const
{
    return name;
}

bool Form::getSignd() const{
    return signd;
}

int Form::getgradetosing() const
{
    return gradetosing;
}

int Form::gradetoexuct()const{
    return gradetoexuc;
}