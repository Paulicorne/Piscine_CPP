#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stdexcept>

// Partant du principe que T est un container d’entiers, cette fonction doit trouver la
// première occurrence du second paramètre dans le premier paramètre.
template <typename T>
int	easyfind(T &tab, int i)
{
	typename T::const_iterator it;

	it = std::find(tab.begin(), tab.end(), i);
	if (it == tab.end())
		throw NoOccurencyFound;
	return (it);
}

class NoOccurencyFound : public std::exception
{
	public :
		virtual const char * what() const throw(){
			return("\033[31mIndex is out of range.\033[0m");
		};
};

# endif