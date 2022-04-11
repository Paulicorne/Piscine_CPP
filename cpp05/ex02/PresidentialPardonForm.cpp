#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Robotomy Request Form", 72, 45, target)
{
}

PresidentialPardonForm::PresidentialPardonForm() : Form("Robotomy Request Form", 72, 45, "Target")
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
	try
	{
		Form::execute(executor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	PresidentialPardonForm::pardon();
}

void	PresidentialPardonForm::pardon() const
{
	int sucess;

	srand( time( NULL ) );
	sucess = rand();
	std::cout << "* DRILL NOISES *" << std::endl;
	if (sucess % 2)
		throw PresidentialPardonForm::RobotimizationFailed();
	else
	{
		std::cout << this->getTarget() << " is a robot now." << std::endl;
	}
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