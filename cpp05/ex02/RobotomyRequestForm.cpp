#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <cstring>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45)
{
	this->setTarget(target);
	//std::cout << target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45)
{
}


// Need to find a way to copy target as well ! (directly in parent class ?..)
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

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	// if ( this != &rhs )
	// {
	// 	this->_signed = rhs._signed;
	// }
	(void)rhs;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
// {
// 	o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

// check signature + check authorizations (BUT doesn't execute ?.. => maybe call this method inside a try/catch, then call the actual execution method just after ?)
void	RobotomyRequestForm::execute( Bureaucrat const &executor) const
{
	try
	{
		//(void)executor;
		//std::cout << executor.getName() << executor.getGrade() << std::endl;
		Form::execute(executor);
		//executor.executeForm(*this);
		//RobotomyRequestForm::draw(/*executor, */this->getTarget());
		//std::cout << executor.getName() << " is executing the Shrubberythingy" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	RobotomyRequestForm::robotomize()
{
	std::cout << this->getTarget() << std::endl;
}

// void	RobotomyRequestForm::execute( Bureaucrat const &executor) const
// {
// 	try
// 	{
// 		//std::cout << executor.getName() << executor.getGrade() << std::endl;
// 		Form::execute(executor);
// 		std::cout << executor.getName() << " is executing the Shrubberythingy" << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }

// void	RobotomyRequestForm::draw(/*Bureaucrat const & buro, */std::string target) const
// {
// 	/* create file w/ASCII stuff */
// 	std::ofstream out((target + std::string("_shrubbery")).c_str()); // out = Output file stream, creates [Filename].replace
//     if (out.fail())
//     {
//         std::cout << "Error: creating file" << std::endl;
//         return;
//     }
// 	out << "tree drawing ASCII art blah";
// 	std::cout << "drew in file !" << std::endl;
// 	//buro.executeForm(*this);
// }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */