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

Form*	Intern::makeForm(std::string name, std::string target)
{
	
	
	Form *(Intern::* formTypes[3])(std::string const target);

	formTypes[0] = &Intern::makeSchrubberryForm;
	formTypes[0] = &Intern::makeRobotomyForm;
	formTypes[0] = &Intern::makePresidentialForm;

	for (int i = 0; i < 3; i++)
		if (name == forms[i])
			return((this->*formTypes[i])(target));
	std::cout << "unknown form" << std::endl;
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


std::string Intern::forms[] = {"schrubbery creation", "robotomy request", "presidential pardon"};
/* ************************************************************************** */