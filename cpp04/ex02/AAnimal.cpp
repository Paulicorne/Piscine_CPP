#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal()
{
	this->_type = "AAnimal";
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal & src )
{
	this->_type = src._type;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "AAnimal default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AAnimal const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	AAnimal::makeSound() const
{
	std::cout << "*ANIMAL NOISE*" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	AAnimal::getType() const
{
	return (this->_type);
}

void	AAnimal::setType(std::string newType)
{
	this->_type = newType;
	return;
}


/* ************************************************************************** */