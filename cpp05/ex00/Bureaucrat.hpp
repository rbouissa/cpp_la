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
    std::string getName()const;
   int getGrade()const ;
   ~Bureaucrat();
};
std::ostream&   operator<<( std::ostream& o, const Bureaucrat& h );

#endif