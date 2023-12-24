#include"AForm.hpp"
#include"Bureaucrat.hpp"
void AForm :: beSigned(Bureaucrat& br)
{
    if (br.getGrade() > gradetosing)
        throw Bureaucrat::GradeTooLowException();
    signd = true;
}
AForm::~AForm()
{
    std::cout<<"AForm Deconstructor Called"<<std::endl;
}

AForm::AForm(): signd(false), gradetoexuc(0), gradetosing(0), name(NULL)
{
    
    std::cout<<"AForm Constructor Called"<<std::endl;
}

// Form::Form(Form &o)
// {
//     *this = o;
// }

AForm::AForm(std::string n, const int gs, const int ge, bool sd)
    : signd(sd), gradetoexuc(gs), gradetosing(ge), name(n)
{
    if (gradetoexuc < 1 || gradetosing < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (gradetoexuc > 150 || gradetosing > 150)
        throw Bureaucrat::GradeTooLowException();
}
std::ostream&   operator<<( std::ostream& o, const AForm& form ) {
    o << "----------FORM DETAILS------" << std::endl;
    o << "NAME-----------> " << form.getName() << std::endl
      << "SIGN GRADE-----> " << form.getgradetosing() << std::endl
      << "EXECUTE GRADE--> " << form.gradetoexuct();
    return o;
}