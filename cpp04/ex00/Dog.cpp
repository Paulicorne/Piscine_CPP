#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog():Animal()
{
	this->setType("Dog");
	std::cout << "Dog default constructor called" << std::endl;
}

// Dog::Dog( const Dog & src )
// {
// }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Dog &				Dog::operator=( Dog const & rhs )
// {
// 	if ( this != &rhs )
// 	{
// 		this->setType(rhs.getType());
// 	}
// 	return *this;
// }

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


/* ************************************************************************** */