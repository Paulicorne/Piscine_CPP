#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <string>

class Convert
{

	public:

		Convert();
		Convert( Convert const & src );
		Convert(char *str);
		virtual ~Convert();

		Convert &		operator=( Convert const & rhs );

		char *		getStr();
		double		getValue();
		float		toFloat();
		int			toInt();
		char		toChar();
		void		printConv();

	private:
		char *	_str;
		double	_val; // storing our value in the most precise type
		bool	_dot;
		bool	_only0;
};

std::ostream &			operator<<( std::ostream & o, Convert const & i );

#endif /* ********************************************************* CONVERT_H */