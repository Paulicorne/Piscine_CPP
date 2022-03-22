#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
	Fixed a;			// default constructor
	Fixed b( a );		// copy constructor (wich uses copy assignment operator) and getRawBits
	Fixed c;			// default constructor

	c = b;				// uses copy assignment operator

	std::cout << a.getRawBits() << std::endl;	// uses getRawBits to print _val
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}