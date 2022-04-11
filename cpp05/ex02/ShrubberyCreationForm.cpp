#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Schrubbery Creation Form", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Schrubbery Creation Form", 145, 137, "Target")
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

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute( Bureaucrat const &executor) const
{
	try
	{
		Form::execute(executor); // checks exec conditions (grade, signature)
		ShrubberyCreationForm::draw(this->getTarget());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
} 

/* create file w/ASCII stuff */
void	ShrubberyCreationForm::draw(std::string target) const
{
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

	std::ofstream out((target + std::string("_shrubbery")).c_str());
    if (out.fail())
    {
        std::cout << "Error: creating file" << std::endl;
        return;
    }
	out << tree;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/




/* ************************************************************************** */