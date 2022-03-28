#include "WrongBrain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongBrain::WrongBrain()
{
	std::cout << "WrongBrain default constructor called" << std::endl;
}

// WrongBrain::WrongBrain( const WrongBrain & src )
// {
// 	this = src;
// 	std::cout << "WrongBrain copy constructor called" << std::endl;
// }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongBrain::~WrongBrain()
{
	std::cout << "WrongBrain default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongBrain &				WrongBrain::operator=( WrongBrain const & rhs )
{
	for (int i = 0; i < 100 ; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	*	WrongBrain::getIdeas()
{
	return (this->_ideas);
}

void			WrongBrain::setIdeas(unsigned int i, std::string str)
{
	this->_ideas[i] = str;
}

/* ************************************************************************** */