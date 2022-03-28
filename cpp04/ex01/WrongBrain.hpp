#ifndef WRONGBRAIN_HPP
# define WRONGBRAIN_HPP

# include <iostream>
# include <string>

class WrongBrain
{

	public:

		WrongBrain();
		// WrongBrain( WrongBrain const & src );
		virtual ~WrongBrain();

		WrongBrain &		operator=( WrongBrain const & rhs );

		std::string	*getIdeas();
		void		setIdeas(unsigned int i, std::string str);

	private:
		std::string _ideas[100];

};

#endif /* *********************************************************** WRONGBRAIN_H */