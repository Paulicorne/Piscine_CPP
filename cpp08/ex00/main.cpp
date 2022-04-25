#include "easyfind.hpp"
# include <iostream>
# include <list>

#define END "\033[0m"
#define GREEN "\033[32m"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "=> Both containers contain ints from 1 to 6 included." << std::endl;

	std::array<int, 6> nbrs = {1,2,3,4,5,6};

	std::cout << GREEN << "Finding 4 in my int std::array : " << END << std::endl;
	std::cout << *easyfind(nbrs, 4) << std::endl;
	try
	{
		std::cout << GREEN << "Finding 14 in my int std::array : " << END << std::endl;
		std::cout << *easyfind(nbrs, 14) << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;



	std::list<int> lst;

	for (int i = 0; i < 6; i++)
		lst.push_back(i);
	std::cout << GREEN << "Finding 4 in my int std::list : " << END << std::endl;
	std::cout << *easyfind(lst, 4) << std::endl;
	try
	{
		std::cout << GREEN << "Finding 14 in my int std::list : " << END << std::endl;
		std::cout << *easyfind(lst, 14) << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}