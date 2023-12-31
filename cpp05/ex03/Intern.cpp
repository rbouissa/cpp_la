#include"Intern.hpp"
#include"AForm.hpp"

Intern::~Intern()
{
    std::cout<<"Intern Deconstructor Called"<<std::endl;
}

Intern::Intern()
{
    
    std::cout<<"Intern Constructor Called"<<std::endl;
}


Intern::Intern(Intern &o)
{
    *this = o;
}
AForm Intern :: *makeForm(std::string name,std::string target)
{
   std::string n[]={"PresidentialPardonForm, ShrubberyCreationForm,RobotomyRequestForm"};
   int i;
   i = 0;
   std::cout<<"Intern creates"<<name<<std::endl;
  
    while(i<3)
    {
        if(n[i]==name)
            switch ((i))
            {
            case 0:
               new PresidentialPardonForm(target);
                break;
            case 1:
                new ShrubberyCreationForm(target);
                
                break;
            case 2:
              new RobotomyRequestForm(target);
                break;
            default:
                break;
            }
        i++;
    }
    std::cout<<"please enter somthing like <PresidentialPardonForm> or <ShrubberyCreationForm>,RobotomyRequestForm"<<std::endl;
    return (NULL);
}

Intern& Intern::operator=( const Intern& o) {
    ( void ) o;
    return (*this);
}