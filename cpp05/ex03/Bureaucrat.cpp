#include"Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Bureaucrat Deconstructor Called"<<std::endl;
}

Bureaucrat::Bureaucrat()
{
    std::cout<<"Bureaucrat Constructor Called"<<std::endl;
}

// Bureaucrat::Bureaucrat(Bureaucrat &o)
// {
//     *this = o;
// }

Bureaucrat::Bureaucrat(std::string n,int g)
{
	name = n;
	if(g)
	    grade = g;
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
std::  ostream &operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
    o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (o);
}

void Bureaucrat :: signForm(AForm& form)
{
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << this->getName() << " couldn’t sign "<< form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try{
		form.execute(*this);
		std::cout<<*this<<" executed "<<form;
	}
	catch(std::exception &e)
	{
		std::cout << this->getName() << " couldn’t execute "<< form.getName() << " because " << e.what() << std::endl;
	}
}