#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{

	public:

		Cat();
		// Cat( Cat const & src );
		/*virtual*/ ~Cat();

		Cat &			operator=( Cat const & rhs );
		virtual void	makeSound() const; // with "virtual" we could add a derived class if we wanted !

	private:

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* CAT_H */