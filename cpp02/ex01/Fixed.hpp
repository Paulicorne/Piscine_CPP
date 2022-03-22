#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );
		Fixed &		operator<<( Fixed const & rhs ); // permet d'envoyer un Fixed à std::cout par exemple

		int		getRawBits(void) const;
		void	setRawBits(int	const	raw);

		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:

		int					_val;
		const static int 	_nb_frac_bits = 8;

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i ); // has to be non-member to use std::ostream type as input without using "friend" keyword

#endif /* *********************************************************** FIXED_H */