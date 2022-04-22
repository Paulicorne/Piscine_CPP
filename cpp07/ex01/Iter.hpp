#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template < typename T>
void	print(T const &data)
{
	std::cout << data << " ";
}

template < typename T>
void	iter(T* adress, size_t size, void(*func)(T const &data)) // const style
{
	size_t i = 0;

	while (i < size)
	{
		func(adress[i]);
		i++;
	}
}

template < typename T>
void	increment(T *data)
{
	*data += 1;
}

template < typename T>
void	iterAlter(T* adress, size_t size, void(*func)(T *data)) // by address, so we can alter data
{
	size_t i = 0;

	while (i < size)
	{
		func(&adress[i]);
		i++;
	}
}

#endif /* ************************************************************ ITER_H */