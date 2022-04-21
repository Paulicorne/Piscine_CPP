#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template < typename T>
void	swap(T & a, T & b) // using reference to match main (cannot use addresses to swap)
{
	T temp = a;
	a = b;
	b = temp;
}

template < typename T>
T		min(T const & a, T const & b)
{
	return( b <= a ? b : a);
}

template < typename T>
T		max(T const & a, T const & b)
{
	return( b >= a ? b : a);
}

class Whatever
{

	public:

		Whatever();
		Whatever( Whatever const & src );
		~Whatever();

		Whatever &		operator=( Whatever const & rhs );

	private:

};

#endif /* ******************************************************** WHATEVER_H */