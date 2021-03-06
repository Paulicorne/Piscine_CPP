#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stdexcept>
# include <algorithm>
# include <array>

class NoOccurencyFound : public std::exception
{
	public :
		virtual const char * what() const throw(){
			return("\033[31mIndex is out of range.\033[0m");
		};
};

template <typename T>
typename T::const_iterator	easyfind(T &tab, int i)
{
	typename T::const_iterator it;

	it = std::find(tab.begin(), tab.end(), i); //
	if (it == tab.end())
		throw ::NoOccurencyFound();
	return (it);
};


# endif