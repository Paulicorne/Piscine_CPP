# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "Form.hpp"

int main()
{
	//Form b; // can't instantiate bc class is now absctract
	ShrubberyCreationForm a("Cible"); // need to use another constructor

	std::cout << a;
	std::cout << std::endl;

	Bureaucrat	Corenting("Corenting", 150);
	Bureaucrat	Fabieng("Fabieng", 1);

	a.execute(Corenting);
	a.execute(Fabieng);
	std::cout << std::endl;

	//a.beSigned(Corenting); // have to catch the error to make this work properly
	Corenting.signForm(a);
	Fabieng.signForm(a);
	std::cout << std::endl;

	a.execute(Corenting);
	std::cout << std::endl;
	a.execute(Fabieng);
    return (0);
}