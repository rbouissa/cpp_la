#ifndef PRESEDENT_H
#define PRESEDENT_H
# include <iomanip>
# include <iostream>
# include <string>
#include <stdexcept>
#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
class Bureaucrat;
class PresidentialPardonForm{
   private:
        bool signd;
        const int gradetoexuc;
         const int gradetosing;
        std::string const name;
       
        
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string n, const int gs,const int ge ,bool sd);
        //Bureaucrat(Bureaucrat &o);
        AForm& operator=(const PresidentialPardonForm& o);
    ~PresidentialPardonForm();
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