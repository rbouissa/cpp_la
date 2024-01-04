#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
# include <iomanip>
# include <iostream>
# include <string>
#include <stdexcept>
#include "AForm.hpp"

class AForm;
class Bureaucrat{
   private:
    std::string name;
    int grade ;
    public :
    Bureaucrat();
    Bureaucrat(std::string name,int g);
    Bureaucrat(Bureaucrat const &o);
    Bureaucrat& operator=(const Bureaucrat& o);
   class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() ;
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
       void        decrementgrade();
    void        incrementgrade();
    std::string getName() const
    {
    return name;
   };
   int getGrade() const{
      return grade;
   }
   void   signForm(AForm &form) const;
   ~Bureaucrat();
   void executeForm(AForm const & form) const;
};
std::ostream& operator<<(std::ostream& h,const Bureaucrat& o);

#endif