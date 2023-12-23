#ifndef PRESIDENTIAL_H
#define PRESIDENTIAL_H
# include <iomanip>
# include <iostream>
# include <string>
#include <stdexcept>
#include "AForm.hpp"
#include"Bureaucrat.hpp"
//class AForm;
class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm( const std::string& trg);
       // PresidentialPardonForm( const PresidentialPardonForm& o);
        PresidentialPardonForm& operator=( const PresidentialPardonForm& o);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor ) const;
};
std::ostream& operator<<(std::ostream& h,const Bureaucrat& o);

#endif