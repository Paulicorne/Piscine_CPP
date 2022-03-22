#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
	/* OLD TESTS from previous exercises */

	// Fixed a;
	// Fixed const b( 10 );
	// Fixed const c( 42.42f );
	// Fixed const d( b );

	// a = Fixed( 1234.4321f );

	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl; // problem here
	// std::cout << "d is " << d << std::endl;

	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;


	/* MAIN FROM SUBJECT */
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	
	/* MY TESTS */
	/* removing all cons/destructors debug info recommanded */

	// std::cout << std::endl << std::endl;
	// Fixed c;
    // Fixed const d(10);
    // Fixed const e(42.42f);
    // Fixed const f(d);

    // c = Fixed(1234.4321f);
    
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;
    // std::cout << "d _val is " << d.getRawBits() << std::endl; 
    // std::cout << "e is " << e << std::endl;
    // std::cout << "f is " << f << std::endl;

    // if (e > d)
    //     std::cout << e << " is superior to " << d << std::endl << "e is superior to d" << std::endl;
    // if (d < e)
    //     std::cout << d << " is inferior to " << e << std::endl << "d is inferior to e" << std::endl;
    // if (d >= f)
    //     std::cout << d << " is superior or equal to " << f << std::endl << "d is superior or equal to f" << std::endl;
    // if (e <= c)
    //     std::cout << e << " is inferior or equal to " << c << std::endl << "e is inferior or equal to c" << std::endl;
    // if (d == f)
    //     std::cout << d << " is equal to " << f << std::endl << "d is equal to f" << std::endl;
    // if (c != e)
    //     std::cout << c << " is different to " << e << std::endl << "c is not equal to e" << std::endl;

    // std::cout << "d + e = " << d + e << std::endl;
    // std::cout << "e - d = " << e - d << std::endl;
    // std::cout << "d * d = " << d * d << std::endl;
    // std::cout << "d / d = " << d / d << std::endl;


    // Fixed g;
	
    // Fixed const h(Fixed(5.05f) * Fixed(2));

    // std::cout << g << std::endl;
    // std::cout << --g << std::endl;
    // std::cout << g << std::endl;
    // std::cout << g-- << std::endl;
    // std::cout << g << std::endl;

    // std::cout << h << std::endl;
    // std::cout << Fixed::min(g, h) << std::endl; // tests min method w/ const args

    // std::cout << Fixed::min(g, a) << std::endl; // tests min w/ non-const args
    // std::cout << Fixed::max(g, a) << std::endl;

	return 0;
}