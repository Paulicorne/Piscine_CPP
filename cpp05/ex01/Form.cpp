#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("Default"), _signed(false), _signGrade(1), _execGrade(1)
{
}

Form::Form( const Form & src ) : _name(src.getName()), _signed(false), _signGrade(1), _execGrade(1)
{
}


Form::Form( const std::string name, bool sig, int signGrade, int execGrade ) : _name(name), _signed(sig), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form parameter constructor called" << std::endl;
	if (_signGrade > 150 || _execGrade > 150)
		throw	Bureaucrat::GradeTooLowException();
	if (_signGrade < 1 || _execGrade < 1)
		throw	Bureaucrat::GradeTooHighException();

}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	std::string is_signed = i.getSigned() == 0 ? "no" : "yes";
	o << "Form \"" << i.getName() << "\" is signed : " << is_signed << ". Can be signed from grade : " << i.getSignGrade() << ", and can be executed from grade : " << i.getExecGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string	Form::getName() const
{
	return(this->_name);
}

bool		Form::getSigned() const
{
	
	return(this->_signed);
}

int	Form::getSignGrade() const
{
	return(this->_signGrade);
}

int	Form::getExecGrade() const
{
	return(this->_execGrade);
}

void				Form::beSigned(const Bureaucrat &buro)
{
	if (buro.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else if (!this->getSigned())
		this->_signed = true;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* EXCEPTIONS */

// const char* Form::GradeTooHighException::what() const throw()
// {
//     return ("Grade too high for this form, try between 1 and 150");
// }

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low for this form, try between 1 and 150");
}

/* ************************************************************************** */