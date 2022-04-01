# include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
	/* => add copy constructor tests !!!!! */

	Form a;

	std::cout << a;
	std::cout << std::endl;

	try
	{
		std::cout << "This should work and just call constructor :" << std::endl;
		Form b("Laissez-passer A38", false, 1, 150);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Form c("Laissez-passer A38", false, -1, 15); // grade too high
		/* 1st line throws error, other ones are not executed, block is stopped here */
		std::cout << "This won't be printed because of the error thrown by line above" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form d("Laissez-passer A38", false, 1500, 1500); // grade too low
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	/* BE_SIGNED TEST */

	Bureaucrat	Corenting("Corenting", 150);
	Bureaucrat	Fabieng("Fabieng", 1);

	Form b("A38", false, 149, 149);
	std::cout << b << std::endl;

	try
	{
		b.beSigned(Corenting); // grade too low
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		b.beSigned(Fabieng); // no error
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << b << std::endl; // form is signed
	std::cout << std::endl;
	std::cout << std::endl;

	/* SIGNFORM TEST */

	Form c("Cerfa n°986813", false, 149, 149);
	std::cout << c << std::endl;

	try
	{
		Corenting.signForm(c);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Fabieng.signForm(c);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << c << std::endl;

	/* ALREADY SIGNED TEST */
	try
	{
		Fabieng.signForm(c);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

    return (0);
}