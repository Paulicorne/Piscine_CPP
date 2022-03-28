#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat():WrongAnimal()
{
	this->setType("WrongCat");
	this->_wbrain = new WrongBrain;
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	// this->setType("WrongCat");
	// this->_wbrain = *src._wbrain;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->setType(rhs.getType());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & i )
{
	o << "Value = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongCat::makeSound() const
{
	std::cout << "*WRONGMEOW*" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

WrongBrain*	WrongCat::getWrongBrain() const
{
	return (this->_wbrain);
}

void		WrongCat::setWrongBrain(WrongBrain* brain)
{
	this->_wbrain = brain;
}

/* ************************************************************************** */