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

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		void	execute( Bureaucrat const &executor) const; // subject requires const
		void	draw(/*Bureaucrat const &buro, */std::string target) const;
	private:
	// make default constructor private ?
		ShrubberyCreationForm();
};

// std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */