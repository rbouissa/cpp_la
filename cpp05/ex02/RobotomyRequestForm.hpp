#ifndef ROBOT_H
#define ROBOT_H
# include <iomanip>
# include <iostream>
# include <string>
#include <stdexcept>
#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
class Bureaucrat;
class RobotomyRequestForm{
   private:
        bool signd;
        const int gradetoexuc;
         const int gradetosing;
        std::string const name;
       
        
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string n, const int gs,const int ge ,bool sd);
        //Bureaucrat(Bureaucrat &o);
        AForm& operator=(const RobotomyRequestForm& o);
    ~RobotomyRequestForm();
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