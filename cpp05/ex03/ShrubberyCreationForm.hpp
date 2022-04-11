#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		void	execute( Bureaucrat const &executor) const; // subject requires const
		void	draw(std::string target) const; // called from execute() so has to be const

	private:
		ShrubberyCreationForm();
};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */