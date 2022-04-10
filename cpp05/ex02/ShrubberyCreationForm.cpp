#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <cstring>

// # define TREE_ART = 

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Schrubbery Creation Form", 145, 137)
{
	this->setTarget(target);
	//std::cout << target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Schrubbery Creation Form", 145, 137)
{
}


// Need to find a way to copy target as well ! (directly in parent class ?..)
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

// check signature + check authorizations (BUT doesn't execute ?.. => maybe call this method inside a try/catch, then call the actual execution method just after ?)
void	ShrubberyCreationForm::execute( Bureaucrat const &executor) const
{
	try
	{
		//(void)executor;
		//std::cout << executor.getName() << executor.getGrade() << std::endl;
		Form::execute(executor);
		//executor.executeForm(*this);
		ShrubberyCreationForm::draw(/*executor, */this->getTarget());
		//std::cout << executor.getName() << " is executing the Shrubberythingy" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
} 

void	ShrubberyCreationForm::draw(std::string target) const
{
	/* create file w/ASCII stuff */
	std::string tree = 
"       _-_\n" 
"    /~~   ~~\\ \n" \
" /~~         ~~\\ \n" \
"{               }\n" \
" \\  _-     -_  /\n" \
"   ~  \\ \\/\\/  ~\n" \
"_- -   | | _- _\n" \
"  _ -  | |   -_\n" \
"  V_V__/ \\__v_\n ";

	std::ofstream out((target + std::string("_shrubbery")).c_str()); // out = Output file stream, creates [Filename].replace
    if (out.fail())
    {
        std::cout << "Error: creating file" << std::endl;
        return;
    }
	out << tree;
	std::cout << "drew in file !" << std::endl;
	//buro.executeForm(*this);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */