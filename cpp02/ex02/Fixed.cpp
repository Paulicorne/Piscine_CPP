#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
	//this->_val = 0; // this would be an alternative to the above " : _val(0)" but takes more lines ...
}

// prenant un entier constant en paramètre et qui convertit celui- ci en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à 8 comme dans l’exercice 00
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
	//*this = src;
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

/* COMPARE */
Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_val = rhs.getRawBits();
	}
	return *this;
}

/* ARITHMETICS */

Fixed Fixed::operator*( Fixed const & rhs )
{
	std::cout << "Multiplication operator overload used" << std::endl;
	std::cout << "Multiplies " << this->_val << " by " << rhs._val << std::endl;

	Fixed	result(this->_val);

	// result(this);
	result._val = result._val * rhs._val;
	return result;
}


/* Pre/post INCREMENT/DE-CREMENT */

//what to return ? Fixed ?
Fixed &	Fixed::operator++( void ) // Prefix increment, ++i
{
	// if ( !this->val )
	// {
	// 	std::cout << "Value not initialised, can't increment it." << std::endl;
	// 	return(1);
	// }
	this->_val++;
	std::cout << "Pre-incremented" << std::endl;
	return *this;
}

Fixed Fixed::operator++( int ) // Postfix increment, i++
{
	// if ( !this->val )
	// {
	// 	std::cout << "Value not initialised, can't increment it." << std::endl;
	// 	return(1);
	// }
	Fixed tmp = *this;
	++*this;

	std::cout << "Post-incremented" << std::endl;
	return tmp;
}

/* OTHER */
std::ostream &operator<<( std::ostream &out, Fixed const &rhs ) //qui insère une représentation en virgule flottante du nombre à virgule fixe dans le flux de sortie (objet output stream) passé en paramètre.
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

int		Fixed::getRawBits(void) const			// retourne la valeur du nombre à virgule fixe sans la convertir
{
	return(this->_val);
}

// void	Fixed::setRawBits(int	const	raw)	// initialise la valeur du nombre à virgule fixe avec celle passée en paramètre
// {
// 	this->_val = raw;
// }
/* ************************************************************************** */