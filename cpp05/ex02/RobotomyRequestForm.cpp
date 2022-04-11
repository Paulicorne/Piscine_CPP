#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45, "Target")
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

// checks signature + checks authorizations
void	RobotomyRequestForm::execute( Bureaucrat const &executor) const
{
	try
	{
		Form::execute(executor);
		RobotomyRequestForm::robotomize();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	RobotomyRequestForm::robotomize() const
{
	int sucess;

	srand( time( NULL ) );
	sucess = rand();
	std::cout << "* DRILL NOISES *" << std::endl;
	if (sucess % 2)
		throw RobotomyRequestForm::RobotimizationFailed();
	else
	{
		std::cout << this->getTarget() << " is a robot now." << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* EXEPTIONS */

const char* RobotomyRequestForm::RobotimizationFailed::what() const throw()
{
    return ("Robotomization failed !");
}
/* ************************************************************************** */