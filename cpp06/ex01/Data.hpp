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

		// uintptr_t	serialize(Data* ptr);
		// Data*		deserialize(uintptr_t raw);
		int		_i;
		char	_c;

	private:
};

std::ostream &			operator<<( std::ostream & o, Data const & i );

#endif /* ************************************************************ DATA_H */