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
    //Bureaucrat(Bureaucrat &o);
    Bureaucrat& operator=(const Bureaucrat& o);
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