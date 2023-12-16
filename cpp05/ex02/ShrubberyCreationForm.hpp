#ifndef SHRUBBER_H
#define SHRUBBERY_H
# include <iomanip>
# include <iostream>
# include <string>
#include <stdexcept>
#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
class Bureaucrat;
class ShrubberyCreationForm{
   private:
        bool signd;
        const int gradetoexuc;
         const int gradetosing;
        std::string const name;
       
        
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string n, const int gs,const int ge ,bool sd);
        //Bureaucrat(Bureaucrat &o);
        AForm& operator=(const ShrubberyCreationForm& o);
    ~ShrubberyCreationForm();
    std::string getName() const
    {
        return name;
    }
    bool getSignd() const
    {
        return signd;
    }
    int getgradetosing() const
    {
        return gradetosing;
    }
    int gradetoexuct() const
    {
        return gradetoexuc;
    }
   void  beSigned(Bureaucrat& br);
};
#endif