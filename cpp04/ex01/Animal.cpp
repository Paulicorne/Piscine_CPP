#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	this->setType("Animal");
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	this->_type = src.getType();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound() const
{
	std::cout << "*ANIMAL NOISE*" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::setType(std::string newType)
{
	this->_type = newType;
	return;
}


/* ************************************************************************** */