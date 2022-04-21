#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

class Whatever
{

	public:

		Whatever();
		Whatever( Whatever const & src );
		~Whatever();

		swap();
		min();
		max();
		Whatever &		operator=( Whatever const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Whatever const & i );

#endif /* ******************************************************** WHATEVER_H */