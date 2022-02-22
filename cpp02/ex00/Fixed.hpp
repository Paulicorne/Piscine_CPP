#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );

		int		getRawBits(void) const;			// retourne la valeur du nombre à virgule fixe sans la convertir
		void	setRawBits(int	const	raw);	// initialise la valeur du nombre à virgule fixe avec celle passée en paramètre

	private:

		int					_val;				// valeur du nombre en virgule fixe
		const static int 	_nb_frac_bits = 8;	// nombre de bits de la partie fractionnaire

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */