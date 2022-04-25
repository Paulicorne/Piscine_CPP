#include "Span.hpp"
# include <iostream>
# include <list>

#define END "\033[0m"
#define GREEN "\033[32m"

// void	printVec(/*std::vector<int> vec,*/Span sp, std::string sep)
// {
// 	//std::copy(sp.getSpan().begin(), sp.getSpan().end(), std::ostream_iterator<char>(std::cout, " "));
// 	std::vector<int> vec = sp.getSpan();


// 	for (unsigned long int i = 0; i < sp.getSpan().size(); i++)
// 	{
// 		std::cout << vec[i] << sep;
// 	}
// 	std::cout << std::endl;
// }

int	main(void)
{
	std::cout << GREEN << "Creating object (of size 5) and filling it with 5 values." << END << std::endl;
	/* SUBJECT'S MAIN */
	Span sp = Span(5);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << GREEN << "Shortest span ? Longest one ?" << END << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;


	std::cout << GREEN << "What ended up in my object ?" << END << std::endl;
	std::cout << sp;
	std::cout << std::endl;

	/* RANGE ADDITION */

	int add = 10;
	std::vector<int> numbers(add);

    srand(time(NULL));
    for (int i = 0; i < add; i++)
    {
        const int value = rand();
        numbers[i] = value;
    }

	std::vector<int>::iterator addBegin = numbers.begin();
	std::vector<int>::iterator addEnd = numbers.end();

	std::cout << GREEN << "Trying to add numbers to my 1st (already full) Span :" << END << std::endl;
	sp.addRange(addBegin, addEnd);
	std::cout << std::endl;

	std::cout << GREEN << "Creating a bigger span, filling 5 values :" << END << std::endl;
	Span sp2 = Span(15);
	try
	{
		sp2.addNumber(6);
		sp2.addNumber(3);
		sp2.addNumber(17);
		sp2.addNumber(9);
		sp2.addNumber(11);
	}
	catch(const Span::SpanFull& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp2;

	sp2.addRange(addBegin, addEnd);

	std::cout << std::endl;
	std::cout << GREEN << "Then trying to add several numbers at a time to my 2nd Span :" << END << std::endl;
	std::cout << sp2;

	return 0;
}