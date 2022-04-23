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
void	increment(T *data)
{
	*data += 1;
}

template < typename T>
void	iter(T* adress, size_t size, void(*func)(T const &data)) // const style, no modification
{
	size_t i = 0;

	while (i < size)
	{
		func(adress[i]);
		i++;
	}
}

template < typename T>
void	iter(T* adress, size_t size, void(*func)(T *data)) // Template specialised with address of data, so we can alter info.
{
	size_t i = 0;

	while (i < size)
	{
		func(&adress[i]);
		i++;
	}
}

#endif /* ************************************************************ ITER_H */