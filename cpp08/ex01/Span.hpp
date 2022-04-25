#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

#define RED "\033[31m"
#define END "\033[0m"

class Span
{

	public:

		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void		addNumber(int newNbr);
		long int	shortestSpan();
		long int	longestSpan();
		void		addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end); // assign : creer un nouveau vector avec les anciennes + nouvelles valeurs ? // insert ?

		class SpanFull : std::exception
		{
			public :
				virtual const char * what() const throw();
		};

		class SpanEmpty : std::exception
		{
			public :
				virtual const char * what() const throw();
		};

		class SpanOneValOnly : std::exception
		{
			public :
				virtual const char * what() const throw();
		};

		unsigned int		getSize() const;
		unsigned int		getFilled() const;
		std::vector<int>	getSpan() const;

		//void				setFilled(int i);

	private:
		unsigned int		_n;
		std::vector<int> 	_span; // vector is a container with variable size
		unsigned int		_filled;
		Span();
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */