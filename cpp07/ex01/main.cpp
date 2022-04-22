#include "Iter.hpp"

int	main(void)
{
	char str[] = "abcdef";
	int nbrs[6] = {1,2,3,4,5,6};
	float fnbrs[6] = {1.9,2.64343,3.321,4.6894,5.0,6.874615};

	std::cout << "Printing my array's content via template with const :" << std::endl;
	::iter(str, std::strlen(str), ::print<char>); // we instatiate ::print explicitly
	//::iter(str, std::strlen(str), ::print); // implicit instantiation does the exact same thing, just remember it could go wrong with user-defined types
	std::cout << std::endl << std::endl;

	::iter(nbrs, 6, ::print); // implicit instatiation from now on bc we have only "classic" types
	std::cout << std::endl << std::endl;

	::iter(fnbrs, 6, ::print);
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "Then incrementing with my template that uses pointers, then re-printing values :" << std::endl;
	::iterAlter(str, std::strlen(str), ::increment);
	::iter(str, std::strlen(str), ::print);
	std::cout << std::endl << std::endl;

	::iterAlter(nbrs, 6, ::increment);
	::iter(nbrs, 6, ::print);
	std::cout << std::endl << std::endl;

	::iterAlter(fnbrs, 6, ::increment);
	::iter(fnbrs, 6, ::print);
	std::cout << std::endl;
}