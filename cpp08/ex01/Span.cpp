#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _n(0), _span(0), _filled(0)
{
}

Span::Span(unsigned int n) : _n(n), _filled(0)
{
}

Span::Span( const Span & src )// : _n(src._n), _span(new std::vector<int>(src._span->begin(), src._span->end())), _filled(src._filled)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_span.clear(); // empties out my vector
		std::copy(rhs._span.begin(), rhs._span.end(), this->_span.begin()); // copies all my rhs._span (begin to end) to the beginning of this->_span
		this->_n = rhs._n;
		this->_filled = rhs._filled;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	o << "Span has size : " << i.getSize() << ", and " << i.getFilled() << " out of them are filled." << std::endl;
	o << "Span's content is : "<< std::endl;
	std::vector<int>::const_iterator it = i.getSpan().begin(); // copying position of beginning to a custom iterator
	std::vector<int>::const_iterator e = i.getSpan().end(); // also copying end position
	for(; it != e; ++it)
	{
		o << *it << " ";
	}
	o << std::endl;
	return (o);
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int newNbr)
{
	if (this->_filled < this->_n)
	{
		this->_span.push_back(newNbr);
		this->_filled++;
	}
	else
		throw SpanFull();
}

long int	Span::shortestSpan()
{
	if (this->_n <= 1 || this->_filled <= 1)
		throw SpanEmpty();

	std::vector<int>	t(this->_span);
	std::sort(t.begin(), t.end()); // sorts values in this copy of my vector

	long int tmp;
	long int shortest = *(t.begin() + 1) - *(t.begin()); // initializing "shortest" with 1st span (1st two elements)

	std::vector<int>::iterator it = t.begin();
	for (; it != t.end() - 1; ++it)
	{
		tmp = *(it + 1) - *it; // comparing next element to current one, stocking difference
		if (tmp < shortest)
			shortest = tmp;
	}

	return(shortest);
}

long int	Span::longestSpan()
{
	if (this->_n <= 1 || this->_filled <= 1)
		throw SpanEmpty();
	
	std::vector<int>::iterator min = std::min_element(this->_span.begin(), this->_span.end());
	std::vector<int>::iterator max = std::max_element(this->_span.begin(), this->_span.end());

	return (*max - *min);

}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it != end; ++it)
	{
		try
		{
			addNumber(*it);	
		}
		catch(const SpanFull& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int	Span::getSize() const
{
	return (this->_n);
}

unsigned int	Span::getFilled() const
{
	return (this->_filled);
}

// void	Span::setFilled(int i)
// {
// 	this->_filled = i;
// }

std::vector<int>	Span::getSpan() const
{
	return (this->_span);
}

/* ************************************************************************** */

/* EXCEPTIONS */

const char * Span::SpanEmpty::what() const throw()
{
	return ("\033[31mSpan is empty.\033[0m");
}

const char * Span::SpanFull::what() const throw()
{
	return ("\033[31mSpan is already full.\033[0m");
}

const char * Span::SpanOneValOnly::what() const throw()
{
	return ("\033[31mSpan contains only one value.\033[0m");
}