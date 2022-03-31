# include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
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
		Form c("Laissez-passer A38", false, -1, 1500);
		/* 1st line throws error, other ones are not executed, block is stopped here */
		std::cout << "This won't be printed because of the error thrown by line above" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form d("Laissez-passer A38", false, 1500, 1500);
		/* 1st line throws error, other ones are not executed, block is stopped here */
		Form e("Laissez-passer A38", false, 1, 1500);
		Form f("Laissez-passer A38", false, 1, -1500);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	/* INSERT OPERATOR TEST */
	std::cout << std::endl;

	Bureaucrat	Corenting("Corenting", 150);
	Bureaucrat	Fabieng("Fabieng", 1);

	std::cout << Corenting;
	std::cout << Fabieng;

	/* BE_SIGNED TEST */

	Form b("A38", false, 149, 149);
	std::cout << b << std::endl;

	try
	{
		b.beSigned(Corenting);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		b.beSigned(Fabieng);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << b << std::endl;

	// try
	// {
	// 	Fabieng.promote();
	// }
	// catch (std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << std::endl;

	/* GRADE TEST */



    return (0);
}