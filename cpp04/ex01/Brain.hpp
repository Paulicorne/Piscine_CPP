#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain &		operator=( Brain const & rhs );

		std::string	*getIdeas();
		void		setIdeas(unsigned int i, std::string str);

	private:
		std::string _ideas[100];

};

#endif /* *********************************************************** BRAIN_H */