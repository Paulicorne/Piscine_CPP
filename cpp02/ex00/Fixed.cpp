#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
	//this->_val = 0; // this would be an alternative to the above " : _val(0)"
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_val = rhs.getRawBits();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int		Fixed::getRawBits(void) const			// retourne la valeur brute stockée, sans la convertir
{
	std::cout << "getRawBits member fuction called" << std::endl;
	return(this->_val);
}

void	Fixed::setRawBits(int	const	raw)	// initialise la valeur du nombre à virgule fixe avec celle passée en paramètre
{
	this->_val = raw;
}
/* ************************************************************************** */