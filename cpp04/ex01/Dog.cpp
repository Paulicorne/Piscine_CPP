#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog():Animal()
{
	this->setType("Dog");
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog & rhs ) : Animal(rhs)
{
	this->setType("Dog");
	this->_brain = new Brain();
	*this = rhs;
	std::cout << "Dog copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	this->setType(rhs.getType());
	*(this->_brain) = *(rhs.getBrain());
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Dog const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << "*BARK BARK*" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain*	Dog::getBrain() const
{
	return (this->_brain);
}

/* ************************************************************************** */