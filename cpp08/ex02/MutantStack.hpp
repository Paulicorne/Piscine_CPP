#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack> // already includes std::deque<T> by default
# include <list>

// template <typename T, class Container = std::deque<T> > // I can specify what underlying container I use, here a "deque"
// template <typename T, class Container = std::list<T> > // here my MutantStack will use a "list"
template <typename T> // here, my MutantStack will use a "deque" by default
class MutantStack : public std::stack<T> // I can have any type stored inside my MutantStack
{

	public:

		MutantStack(void){};
		MutantStack( MutantStack const & src ){
			*this = src;
		};
		~MutantStack(){};

		MutantStack &		operator=( MutantStack const & rhs ){
			if ( *this != &rhs )
			{
				*this = new std::stack<T>(rhs);
			}
			return *this;
		};

		typedef typename std::stack<T>::container_type::iterator iterator; // increasing readability of code

		iterator begin(){return std::stack<T>::c.begin();}; // "c" is the underlying container, protected in original class, but useable in inherited classes
		iterator end(){return std::stack<T>::c.end();};

	private:

};

#endif /* ***************************************************** MUTANTSTACK_H */