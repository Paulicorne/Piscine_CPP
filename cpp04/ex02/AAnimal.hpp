#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{

	public:

		AAnimal();
		AAnimal( AAnimal const & src ); // constructors cannot be declared ‘virtual’ at all
		virtual ~AAnimal() = 0;

		AAnimal &					operator=( AAnimal const & rhs );

		virtual const std::string	getType() const;
		virtual void				setType(std::string newType);

		virtual void				makeSound() const = 0; // the "= 0" notation is making this func "pure virtual"

	protected:
		std::string _type;

	private:
};

std::ostream &			operator<<( std::ostream & o, AAnimal const & i );

#endif /* ********************************************************** AANIMAL_H */