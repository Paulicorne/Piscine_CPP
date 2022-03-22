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

		Fixed &			operator=( Fixed const & rhs );

		bool 			operator>(Fixed const &rhs) const;
        bool 			operator<(Fixed const &rhs) const;
        bool 			operator>=(Fixed const &rhs) const;
        bool 			operator<=(Fixed const &rhs) const;
        bool 			operator==(Fixed const &rhs) const;
        bool 			operator!=(Fixed const &rhs) const;

		Fixed			operator*(Fixed const & rht) const;
		Fixed 			operator+(Fixed const &rht) const;
        Fixed 			operator-(Fixed const &rht) const;
        Fixed 			operator/(Fixed const &rht) const;

		Fixed &			operator<<( Fixed const & rhs ); // insère une représentation en vir- gule flottante du nombre à virgule fixe dans le flux de sortie (objet output stream) passé en paramètre.

		Fixed &			operator++( void );
		Fixed			operator++( int );
		Fixed &			operator--( void );
		Fixed			operator--( int );

		static Fixed 	min(Fixed &lhs, Fixed &rhs);
		static Fixed 	max(Fixed &lhs, Fixed &rhs);
		static Fixed 	max(Fixed const &lhs, Fixed const &rhs);
		static Fixed 	min(Fixed const &lhs, Fixed const &rhs);

		int				getRawBits(void) const;
		void			setRawBits(int	const	raw);

		float			toFloat( void ) const;
		int				toInt( void ) const;

	private:

		int					_val;
		const static int 	_nb_frac_bits = 8;

};

//This method/operator overload has to be non-member to use left hand argument (in this case, the output stream), not only the right one (here, the input, an instance of our Fixed class)
std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */