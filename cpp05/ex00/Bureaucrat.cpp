#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src._name), _grade(src._grade)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o  << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Bureaucrat::promote(void)
{
	try
	{
		if (this->_grade <= 1)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		else
			this->_grade--;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void			Bureaucrat::demote(void)
{
	try
	{
		if (this->_grade >= 150)
		{
			throw Bureaucrat::GradeTooLowException();
		}
		else
			this->_grade++;
		
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Bureaucrat::getName() const
{
	return (this->_name);
}

int				Bureaucrat::getGrade() const
{
	return (this->_grade);
}

/* EXCEPTIONS */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high, try between 1 and 150");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low, try between 1 and 150");
}

/* ************************************************************************** */