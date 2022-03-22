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

		int		getRawBits(void) const;			// retourne la valeur brute stockée dans le nombre à virgule fixe, sans la convertir
		void	setRawBits(int	const	raw);	// change la valeur brute stockée avec celle passée en paramètre

	private:

		int					_val;				// valeur stockée correspondant nombre
		const static int 	_nb_frac_bits = 8;	// nombre de bits de la partie fractionnaire (nombre de bitshifts à opérer pour retrouver la valeur "réelle")

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */