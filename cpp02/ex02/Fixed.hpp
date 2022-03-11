#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed(int const nb);	// prenant un entier constant en paramètre et qui convertit celui- ci en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à 8 comme dans l’exercice 00
		Fixed(float const nb);	// prenant un flottant constant en paramètre et qui convertit celui-ci en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à 8 comme dans l’exercice 00.
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );
		Fixed &		operator<<( Fixed const & rhs ); // insère une représentation en vir- gule flottante du nombre à virgule fixe dans le flux de sortie (objet output stream) passé en paramètre.

		Fixed &		operator++( void );
		Fixed		operator++( int );

		Fixed		operator*( Fixed const & rhs );

		int		getRawBits(void) const;			// retourne la valeur du nombre à virgule fixe sans la convertir
		void	setRawBits(int	const	raw);	// initialise la valeur du nombre à virgule fixe avec celle passée en paramètre

		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:

		int					_val;				// valeur du nombre en virgule fixe
		const static int 	_nb_frac_bits = 8;	// nombre de bits de la partie fractionnaire

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */