#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
# include <iomanip>
# include <iostream>
# include <string>
#include <stdexcept>
class Bureaucrat{
   private:
    std::string name;
    int grade ;
    public :
    Bureaucrat();
    Bureaucrat(std::string name,int g);
    Bureaucrat(Bureaucrat &o);
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
    std::string getName(){
    return name;
   };
   // void SetName(std::string n){
   //    name=n;
   // };
   //  void SetGrade(int n){
   //    grade=n;
   // };
   int getGrade(){
      return grade;
   }
   ~Bureaucrat();
};
std::ostream& operator<<(std::ostream& h,const Bureaucrat& o);

#endif