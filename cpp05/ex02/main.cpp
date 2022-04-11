# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Form.hpp"

int main()
{
	//Form b; // can't instantiate bc class is now absctract
	ShrubberyCreationForm a("Jardin");

	std::cout << a;
	std::cout << std::endl;

	Bureaucrat	Corenting("Corenting", 150);
	Bureaucrat	Fabieng("Fabieng", 1);

	a.execute(Corenting);
	a.execute(Fabieng);
	std::cout << std::endl;

	//a.beSigned(Corenting); // have to catch the error to make this work properly
	try
	{
		a.beSigned(Corenting); // grade too low
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	Corenting.signForm(a);
	a.execute(Fabieng);

	Fabieng.signForm(a);
	std::cout << std::endl;

	a.execute(Corenting);
	std::cout << std::endl;
	a.execute(Fabieng);

	std::cout << a;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	/* ROBOTOMY */

	RobotomyRequestForm b("Jean-Jacques");
	std::cout << b;

	RobotomyRequestForm c("Michel");
	std::cout << c;

	c = b;
	std::cout << c;
	std::cout << std::endl;
	std::cout << std::endl;

	Fabieng.signForm(b);
	std::cout << std::endl;
	b.execute(Fabieng);
	std::cout << std::endl;
	std::cout << b;
	std::cout << std::endl;

	Fabieng.executeForm(b);
	std::cout << std::endl;
	Corenting.executeForm(b);

	/* PRESIDENT'S PARDON */

	

    return (0);
}