#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		Form*	makeForm(std::string const name, std::string const target);
	private:
		Form*	makeSchrubberryForm(std::string const target);
		Form*	makeRobotomyForm(std::string const target);
		Form*	makePresidentialForm(std::string const target);

		static std::string _forms[3];
};

#endif /* ********************************************************** INTERN_H */