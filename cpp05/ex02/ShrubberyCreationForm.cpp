#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <cstring>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Schrubbery Creation Form", 145, 137)
{
	this->setTarget(target);
	std::cout << target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Schrubbery Creation Form", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	// if ( this != &rhs )
	// {
	// 	this->_signed = rhs._signed;
	// }
	(void)rhs;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
// {
// 	o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute( Bureaucrat const &executor) const
{
	try
	{
		//std::cout << executor.getName() << executor.getGrade() << std::endl;
		Form::execute(executor);
		ShrubberyCreationForm::draw(executor, target);
		//std::cout << executor.getName() << " is executing the Shrubberythingy" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// void	ShrubberyCreationForm::execute( Bureaucrat const &executor) const
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

void	ShrubberyCreationForm::draw(Bureaucrat const & buro, std::string target) const
{
	/* create file w/ASCII stuff */
	std::cout << "drawing in file" << std::endl;
	std::ofstream out((target + std::string("_shrubbery")).c_str()); // out = Output file stream, creates [Filename].replace
    if (out.fail())
    {
        std::cout << "Error: creating file" << std::endl;
        return;
    }
	out << "tree drawing";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */