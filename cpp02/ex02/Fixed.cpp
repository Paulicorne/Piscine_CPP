#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb) : _val(nb << this->_nb_frac_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

// same method as above, but we have to round result to be sure not get rid of remaining decimal data after shifting the bits.
Fixed::Fixed(float const nb)  // :_val(roundf(nb * (1 << this->_nb_frac_bits))) // this works too, but isn't really readable
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = (roundf(nb * (1 << this->_nb_frac_bits)));
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

/* COMPARE */
/* rhs = right hand side (of the equation) */

bool Fixed::operator>(Fixed const &rhs) const
{
    return this->_val > rhs.getRawBits();
}
bool Fixed::operator<(Fixed const &rhs) const
{
    return this->_val < rhs.getRawBits();
}


bool Fixed::operator>=(Fixed const &rhs) const
{
    return this->_val >= rhs.getRawBits();
}
bool Fixed::operator<=(Fixed const &rhs) const
{
    return this->_val <= rhs.getRawBits();
}
bool Fixed::operator==(Fixed const &rhs) const
{
    return this->_val == rhs.getRawBits();
}
bool Fixed::operator!=(Fixed const &rhs) const
{
    return this->_val != rhs.getRawBits();
}

/* ARITHMETICS */
/* Here we use toFloat method to work with our "real" values (not raw bits stored in this._value) & keep our decimal parts */
/* Args must be const ohterwise it doesn't compile : indeed you can't change right hand  */
/* rht = right hand term (multiplier, added or subtracted value etc.) */

Fixed Fixed::operator*(Fixed const &rht) const
{
	std::cout << "Multiplication operator overload used" << std::endl;
	return Fixed(this->toFloat() * rht.toFloat());
}
Fixed Fixed::operator/(Fixed const &rht) const
{
    return Fixed(this->toFloat() / rht.toFloat());
}

Fixed Fixed::operator+(Fixed const &rht) const
{
    return Fixed(this->toFloat() + rht.toFloat());
}
Fixed Fixed::operator-(Fixed const &rht) const
{
    return Fixed(this->toFloat() - rht.toFloat());
}


/* INCREMENTATION */

Fixed &	Fixed::operator++( void ) // Prefix increment, ++i
{
	this->_val++;
	return *this;
}

Fixed Fixed::operator++( int ) // Postfix increment, i++
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

/* DECREMENTATION */

Fixed & Fixed::operator--(void)
{
    this->_val--;
    return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
    --(*this);
    return tmp;
}

/* INSERT to std::ostream */
/* only way to use std::ostream type as input without using "friend" keyword */
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
	return (this->_val >> this-> _nb_frac_bits); // shifts bits to the right, to get the real value
}


Fixed Fixed::min(Fixed &lhs, Fixed &rhs) 
{
    //std::cout << "Works w/ non-const args, awesome !" << std::endl;
    return ((lhs.toFloat() > rhs.toFloat()) ? rhs : lhs);
}

Fixed Fixed::max(Fixed &lhs, Fixed &rhs)
{
    //std::cout << "Works w/ non-const args, awesome !" << std::endl;
    return ((lhs.toFloat() > rhs.toFloat()) ? lhs : rhs);
}

Fixed Fixed::min(Fixed const &lhs, Fixed const &rhs) 
{
    //std::cout << "Works w/ const args, brilliant !" << std::endl;
	return ((lhs.toFloat() > rhs.toFloat()) ? rhs : lhs);
}

Fixed Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
    //std::cout << "Works w/ const args, brilliant !" << std::endl;
    return ((lhs.toFloat() > rhs.toFloat()) ? lhs : rhs);
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