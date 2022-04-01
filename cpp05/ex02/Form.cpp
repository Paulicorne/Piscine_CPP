#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("Default"), _signed(false), _signGrade(1), _execGrade(1)
{
}

Form::Form( const Form & src ) : _name(src.getName()), _signed(false), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
}


Form::Form( const std::string name, int signGrade, int execGrade ) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form parameter constructor called" << std::endl;
	if (_signGrade > 150 || _execGrade > 150)
		throw	Form::GradeTooLowException();
	if (_signGrade < 1 || _execGrade < 1)
		throw	Form::GradeTooHighException();

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

// is this really enough ? That makes sense bc other attributes are private, but check again
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

bool				Form::getSigned() const
{
	return(this->_signed);
}

int					Form::getSignGrade() const
{
	return(this->_signGrade);
}

int					Form::getExecGrade() const
{
	return(this->_execGrade);
}

void				Form::beSigned(Bureaucrat const &buro)
{
	if (this->getSigned())
		throw Form::AlreadySignedException();
	else if (buro.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

void		Form::execute( Bureaucrat const &executor ) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	else if (!getSigned())
		throw Form::NotYetSignedException();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void		Form::setTarget( std::string target )
{
	this->_target = target;
}

/* EXCEPTIONS */

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high for this form, try between 1 and 150");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low for this form, try between 1 and 150");
}

const char* Form::AlreadySignedException::what() const throw()
{
    return ("Form is already signed.");
}

const char* Form::NotYetSignedException::what() const throw()
{
    return ("Form isn't signed yet !");
}

/* ************************************************************************** */