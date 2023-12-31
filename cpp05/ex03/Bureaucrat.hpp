#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
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
    //Bureaucrat(Bureaucrat &o);
    Bureaucrat& operator=(const Bureaucrat& o);
    class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() ;
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
    std::string getName() const
    {
    return name;
   };
    void        decrementgrade();
    void        incrementgrade();
   // void SetName(std::string n){
   //    name=n;
   // };
   //  void SetGrade(int n){
   //    grade=n;
   // };
   int getGrade() const{
      return grade;
   }
   void   signForm(AForm &form);
   ~Bureaucrat();
   void executeForm(AForm const & form) ;
};
std::ostream& operator<<(std::ostream& h,const Bureaucrat& o);

#endif