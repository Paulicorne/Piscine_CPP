#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal(); // if this is not virtual, Animal destructor will be called for derived classes as well

		Animal &			operator=( Animal const & rhs );

		const std::string	getType() const;
		void				setType(std::string newType);

		virtual void		makeSound() const;

	private:
		std::string _type;
};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */