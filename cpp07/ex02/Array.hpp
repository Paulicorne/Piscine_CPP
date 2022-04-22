#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <initializer_list>

# define END "\033[0m"

template<typename T>
class Array
{

	public:

		Array<T>() :  _n(0), _array(NULL){std::cout << "Default constructor called" << std::endl;};
		Array<T>( unsigned int n ) : _n(n),_array(new T[n]()) {std::cout << "Size paremeter constructor called" << std::endl;};	// initialised by default by adding "()" after "new T[n]"
		Array<T>( Array const & src ) : _n(src._n), _array(NULL)
		{
			std::cout << "Copy constructor called" << std::endl;
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i]= src._array[i];
		};

		~Array<T>(){ delete [] this->_array; };

		Array &		operator=( Array const & rhs );
		T	&operator[](unsigned int i) const
		{
			if (i >= this->_n)
				throw Array::InvalidIndex();
			else
				return(this->_array[i]);
		}

		unsigned int const	&size() const{	return(this->_n);};
		
		class	InvalidIndex : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{	return ("\033[31mIndex is out of range.\033[0m");};
		};

	private:
		unsigned int	_n;
		T*				_array;
};

template <typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> const & arr ){
	unsigned int i = 0;
	while (i < arr.size())
	{
		o << "Value in index " << i << " is : " << arr[i] << std::endl;
		i++;
	}
	return o;
};

#endif /* *********************************************************** ARRAY_H */