#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat():AAnimal()
{
	this->setType("Cat");
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( Cat const & rhs ) : AAnimal(rhs)
{
	this->setType("Cat");
	this->_brain = new Brain();
	*this = rhs;
	std::cout << "Cat copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat default destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	this->setType(rhs.getType());
	*(this->_brain) = *(rhs.getBrain());
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "Value = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const
{
	std::cout << "*MEOW*" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain*	Cat::getBrain() const
{
	return (this->_brain);
}

/* ************************************************************************** */