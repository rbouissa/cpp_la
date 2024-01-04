#ifndef INTERN_HPP
#define INTERN_HPP
# include <iomanip>
# include <iostream>
# include <string>
#include <stdexcept>
#include "AForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

class Intern{
    public :
    Intern();
    ~Intern();
    Intern(Intern const&o);
  Intern &operator=(Intern const &o);
   AForm *makeForm(std::string name,std::string target);
   };
#endif