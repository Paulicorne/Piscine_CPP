#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5, "Target")
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

// checks signature + checks authorizations
void	PresidentialPardonForm::execute( Bureaucrat const &executor) const
{

	Form::execute(executor);
	PresidentialPardonForm::pardon();
}

void	PresidentialPardonForm::pardon() const
{
	std::cout << this->getTarget() << " has been pardonned by the almighty Zaphod Beeblebrox." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* EXEPTIONS */

const char* PresidentialPardonForm::RobotimizationFailed::what() const throw()
{
    return ("Robotomization failed !");
}
/* ************************************************************************** */