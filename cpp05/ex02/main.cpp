# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"

int main()
{
	//Form b; // can't instantiate bc class is now absctract
	ShrubberyCreationForm a("Jardin");

	std::cout << a;
	std::cout << std::endl;

	Bureaucrat	Corenting("Corenting", 150);
	Bureaucrat	Fabieng("Fabieng", 1);
	try
	{
		a.execute(Corenting); // Grade too low !
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		a.execute(Fabieng); // Not signed yet !
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;

	try
	{
		a.beSigned(Corenting); // Grade too low !
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	Corenting.signForm(a); // Grade too low !
	Fabieng.signForm(a);
	std::cout << std::endl;

	try
	{
		a.execute(Corenting); // Grade too low !
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try
	{
		a.execute(Fabieng); // creates file w/ tree
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//std::cout << a; // if you want to check form's info

	std::cout << std::endl;
	std::cout << std::endl;
	Corenting.executeForm(a); // couldn't execute because ...
	Fabieng.executeForm(a); // executed ...

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	std::cout << "ROBOTOMY PART" << std::endl;
	/* ROBOTOMY */

	RobotomyRequestForm b("Jean-Jacques");
	std::cout << b;

	RobotomyRequestForm c("Michel");
	std::cout << c;

	c = b;
	std::cout << c;
	std::cout << std::endl;
	std::cout << std::endl;

	Fabieng.signForm(b); // signed form
	std::cout << std::endl;
	try
	{
		b.execute(Fabieng); // makes drill noises, fails half of the time
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	//std::cout << b; // if you want to check form's info
	std::cout << std::endl;

	Fabieng.executeForm(b); // executed form
	std::cout << std::endl;
	Corenting.executeForm(b); // couldn't execute because ...



	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "PARDON PART" << std::endl;
	/* PRESIDENT'S PARDON */

	PresidentialPardonForm d("Robert");
	
	Corenting.executeForm(d);
	try
	{
		d.execute(Corenting);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	Fabieng.executeForm(d);
	try
	{
		d.execute(Fabieng);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	d.beSigned(Fabieng); // silent signing method, doesn't print anything
	//Fabieng.signForm(d); // signs and prints msg
	std::cout << std::endl;
	Fabieng.executeForm(d);
	try
	{
		d.execute(Fabieng);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    return (0);
}