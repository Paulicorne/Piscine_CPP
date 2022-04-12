#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this; // nothing to copy
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form*	Intern::makeForm(std::string const name, std::string const target)
{
	/* here we use an array of function pointers to wich we pass target (each form type has a constructor that takes a "target" arg) */
	
	Form *(Intern::* formTypes[3])(std::string const target);

	formTypes[0] = &Intern::makeSchrubberryForm;
	formTypes[1] = &Intern::makeRobotomyForm;
	formTypes[2] = &Intern::makePresidentialForm;

	for (int i = 0; i < 3; i++)
		if (name == _forms[i])
			return((this->*formTypes[i])(target));
	std::cout << "Intern couldn't create this : unknown form name." << std::endl;
	return (NULL);
}

Form* Intern::makeSchrubberryForm(std::string const target)
{
	ShrubberyCreationForm* form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return(form);
}
Form* Intern::makeRobotomyForm(std::string const target)
{
	RobotomyRequestForm* form = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return(form);
}
Form* Intern::makePresidentialForm(std::string const target)
{
	PresidentialPardonForm* form = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return(form);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


std::string Intern::_forms[] = {"schrubbery creation", "robotomy request", "presidential pardon"};
/* ************************************************************************** */