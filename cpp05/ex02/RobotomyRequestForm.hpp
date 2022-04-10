#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		void	execute( Bureaucrat const &executor) const; // subject requires const
		//void	draw(/*Bureaucrat const &buro, */std::string target) const;
		void	robotomize(void);
	private:
	// make default constructor private ?
		RobotomyRequestForm();
};

// std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ******************************************* ROBOTOMYREQUESTFORM_H */