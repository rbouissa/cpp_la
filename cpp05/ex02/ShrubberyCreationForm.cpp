
#include"ShrubberyCreationForm.hpp"

#include <fstream>
#include <iostream>
#include<cstdlib>
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& trg) : AForm( "ShrubberyCreationForm",145,137,false) ,  target(trg)
{      
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    
     if ( this->getSignd() == false )
        throw AForm::GradeTooLowException();
    if ( executor.getGrade() > this->gradetoexuct() ) {
        throw AForm::GradeTooLowException();
    }
      std::string filename = target + "_shrubbery.txt";
            std::ofstream file(filename.c_str());
            if (file.is_open()) {

                file <<  "         /\\\n"
        "        /__\\\n"
        "       /    \\\n"
        "      /      \\\n"
        "     /        \\\n"
        "    /          \\\n"
        "   /____________\\\n"
        "      |  |  |\n"
        "      |  |  |";
                file.close();
                std::cout << "Shrubbery file '" << filename << "' created successfully.\n";
            } else {
                std::cerr << "Error creating shrubbery file.\n";
            }
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout<<"RobotomyRequestForm Deconstructor Called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm():target(NULL)
{
    std::cout<<"RobotomyRequestForm Constructor Called"<<std::endl;
}