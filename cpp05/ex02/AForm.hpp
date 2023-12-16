#ifndef FORM_H
#define FORM_H
# include <iomanip>
# include <iostream>
# include <string>
#include <stdexcept>
#include"Bureaucrat.hpp"

class Bureaucrat;
class AForm{
   private:
        bool signd;
        const int gradetoexuc;
         const int gradetosing;
        std::string const name;
       
        
    public :
        AForm();
        AForm(std::string n, const int gs,const int ge ,bool sd);
        //Bureaucrat(Bureaucrat &o);
        AForm& operator=(const AForm& o);
        class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw(){
                return "GradeTooLowException";
            }
        };
        class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw(){
                return "GradeTooHighException";
            }
        };
    ~AForm();
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
std::ostream& operator<<(std::ostream& h,const AForm& o);
#endif