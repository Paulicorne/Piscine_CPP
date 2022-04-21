#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

class Iter
{

	public:

		Iter();
		Iter( Iter const & src );
		~Iter();

		Iter &		operator=( Iter const & rhs );

	private:

};

#endif /* ************************************************************ ITER_H */