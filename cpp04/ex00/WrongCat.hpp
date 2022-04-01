#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		// WrongCat( WrongCat const & src );
		virtual ~WrongCat(); // derived class can have virtual keyword, as long as parent is not, it won't override the function.

		WrongCat &	operator=( WrongCat const & rhs );
		/*virtual*/ void		makeSound() const; // virtual here would only work for a class derived from WrongCat.

	private:

};

std::ostream &		operator<<( std::ostream & o, WrongCat const & i );

#endif /* ************************************************************* WRONGCAT_H */