#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		void	execute( Bureaucrat const &executor) const; // subject requires const
		void	pardon(void) const;

		class RobotimizationFailed : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

	private:
		PresidentialPardonForm();
};

#endif /* ******************************************* PRESIDENTIALPARDONFORM_H */