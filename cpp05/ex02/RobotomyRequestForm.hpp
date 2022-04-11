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

		// using Form::operator=; // this is not allowed by subject but works as well

		void	execute( Bureaucrat const &executor) const; // subject requires const
		void	robotomize(void) const;

		class RobotimizationFailed : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

	private:
		RobotomyRequestForm();
};

#endif /* ******************************************* ROBOTOMYREQUESTFORM_H */