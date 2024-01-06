#include"Bureaucrat.hpp"
Bureaucrat::~Bureaucrat()
{
    std::cout<<"Bureaucrat Deconstructor Called"<<std::endl;
}

Bureaucrat::Bureaucrat()
{
    std::cout<<"Bureaucrat Constructor Called"<<std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &o):name(o.name)
{
    *this = o;
}

Bureaucrat::Bureaucrat(std::string n,int g):name(n)
{
	name = n;
    if(g < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	if(g)
	grade = g;
}

Bureaucrat &Bureaucrat :: operator=(const Bureaucrat& o)
{
    if(this != &o)
    {
       std::cout <<"Copy assignment operator called"<<std::endl;
       name=o.name;
	   grade=o.grade;
    }
    return *this;
}

std::  ostream &operator<<(std::ostream &o, Bureaucrat const &h)
{
    o << h.getName() << ", bureaucrat grade " << h.getGrade() << std::endl;
    return (o);
}

void    Bureaucrat::incrementgrade() {
    
    if ( grade -1 < 1 )
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void    Bureaucrat::decrementgrade() {
    if ( grade+1 > 150 )
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

const char *	Bureaucrat::GradeTooHighException::what() const throw() {
    return "GradeTooHighException";
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
    return "GradeTooLowException";
}

std::string Bureaucrat::getName() const 
{
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

