#include "Array.hpp"

#define END "\033[0m"
#define GREEN "\033[32m"

int	main(void)
{
	// int * a = new int();
	// std::cout << *a;

	/* EMPTY ARRAY */
	std::cout << GREEN << "EMPTY ARRAY" << END << std::endl << std::endl;
	Array<int>	arr0;
	std::cout << "Size of array arr0 is : " << arr0.size() << std::endl;
	std::cout << arr0 << std::endl;
	try
	{
		std::cout << "Trying to modify data at index 0 of array : ";
		arr0[0] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;



	/* ARRAY WITH SIZE */
	std::cout << GREEN << "ARRAY WITH SIZE" << END << std::endl << std::endl;
	unsigned int n = 3;
	Array<int> arr(n);
	std::cout << "Size of array is : " << arr.size() << std::endl;
	std::cout << arr << std::endl;
	try
	{
		std::cout << "Trying to print : " << arr[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Size of array is : " << arr.size() << std::endl << std::endl;



	/* ARRAY BY (DEEP) COPY */
	std::cout << GREEN << "ARRAY BY COPY" << END << std::endl << std::endl;
	Array<int> arr2(arr);
	std::cout << arr2 << std::endl;
	arr2[0] = 42;
	arr2[1] = 43;
	arr2[2] = 44;
	try
	{
		arr2[3] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	std::cout << GREEN << "WOW MY ARRAY COPY IS SO DEEP CHECK THIS OUT" << END << std::endl << std::endl;
	std::cout << arr << std::endl;
	std::cout << arr2 << std::endl;
}