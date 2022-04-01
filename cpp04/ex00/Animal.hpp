#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );

		const std::string	getType() const;
		void				setType(std::string newType);

		virtual void		makeSound() const; // this use of "virtual" makes shure derived classes use THEIR OWN implementation of the function

	private:
		std::string _type;
};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */