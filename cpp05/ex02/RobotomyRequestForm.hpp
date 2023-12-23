#ifndef ROBOT_HPP
#define ROBOT_HPP


#include <fstream>
#include "AForm.hpp"
#include<cstdlib>
#include"Bureaucrat.hpp"
class RobotomyRequestForm : public AForm
{
    private:
        const std::string   target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm( const std::string& trg);
        RobotomyRequestForm( const RobotomyRequestForm& o );
        RobotomyRequestForm&  operator=(const RobotomyRequestForm& o );
        ~RobotomyRequestForm();
        void    execute( const Bureaucrat& execbur) const;
};

#endif 