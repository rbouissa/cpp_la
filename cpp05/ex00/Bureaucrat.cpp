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