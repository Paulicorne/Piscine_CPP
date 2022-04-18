# include "Convert.hpp"

int	main(int ac, char *av[])
{
	if (ac == 1){
		std::cout << "nothing to convert\n";
		return (0);
	}
	if (ac > 2){
		std::cout << "Error : too many thingd to convert\n";
		return (0);
	}

	double a = 8.9654;

	double b = static_cast<int>(a);

	std::cout << b << std::endl;

	(void)av;
	// Convert	c(av[1]);
	// c.printConversion();	
	return (0);
}