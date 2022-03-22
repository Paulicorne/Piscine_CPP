#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb) : _val(nb << this->_nb_frac_bits)	// _val = nb * 256 (1 shift = *2, 8 shifts = *256 ?) ?
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const nb) : _val(roundf(nb * (1 << this->_nb_frac_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_val = rhs.getRawBits();
	}
	return *this;
}

/* avoiding forbidden keyword "friend" by having this method be a non-member */
std::ostream &operator<<( std::ostream &out, Fixed const &rhs )
{
	out << rhs.toFloat();
	return(out);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float	Fixed::toFloat( void ) const
{
	return((float) this->_val / (float)(1 << this->_nb_frac_bits)); // divides value by 256 (which is 1 << 8, 1 shifted 8 times to the left)
}

int		Fixed::toInt( void ) const
{
	return (this->_val >> this-> _nb_frac_bits); // shifts bits to the right, to ignore fractionnal part
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int		Fixed::getRawBits(void) const
{
	return(this->_val);
}

void	Fixed::setRawBits(int	const	raw)
{
	this->_val = raw;
}

/* ************************************************************************** */