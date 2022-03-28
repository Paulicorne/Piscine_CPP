#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src;
	std::cout << "Brain copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
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

std::string	*	Brain::getIdeas()
{
	return (this->_ideas);
}

void			Brain::setIdeas(unsigned int i, std::string str)
{
	this->_ideas[i] = str;
}

/* ************************************************************************** */