# include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a;

    std::cout << a;


	/* CONSTRUCTOR ERROR TESTS */
	try
	{
		Bureaucrat b("Bob", 166);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("Bill", -166);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	/* GRADE ERRORS TEST */

	Bureaucrat	Corenting("Corenting", 150);
	Bureaucrat	Fabieng("Fabieng", 1);

	std::cout << Corenting;
	std::cout << Fabieng;

	try
	{
		Corenting.demote();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}


	try
	{
		Fabieng.promote();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	/* GRADE TEST */

	try
	{
		Corenting.promote();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << Corenting;

	try
	{
		Fabieng.demote();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << Fabieng;

    return (0);
}