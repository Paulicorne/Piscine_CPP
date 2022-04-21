#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{

	public:

		Data();
		Data( Data const & src );
		~Data();

		Data &		operator=( Data const & rhs );

		int		_i;
		char	_c;

	private:
};

#endif /* ************************************************************ DATA_H */