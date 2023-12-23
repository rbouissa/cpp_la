#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP


#include <fstream>
#include "AForm.hpp"
#include<cstdlib>
#include"Bureaucrat.hpp"
class ShrubberyCreationForm : public AForm
{
    private:
        const std::string   target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& trg);
        ShrubberyCreationForm(const ShrubberyCreationForm& o);
        ShrubberyCreationForm&  operator=( ShrubberyCreationForm& o);
        ~ShrubberyCreationForm();
        void    execute( Bureaucrat const & executor) const;
};

#endif 