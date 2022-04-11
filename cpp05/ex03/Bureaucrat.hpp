#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		Bureaucrat &	operator=( Bureaucrat const & rhs );

		std::string		getName() const;
		int				getGrade() const;

		void			promote(void);
		void			demote(void);

		void			signForm(Form &form);
		void			executeForm(Form const & form);

		class	GradeTooHighException : public std::exception 
		{
        	public:
        	    virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception 
		{
        	public:
        	    virtual const char* what() const throw(); 
		};
		// class AlreadySignedException : public std::exception
		// {
		// 	public :
		// 		virtual const char* what() const throw();
		// };

	private:
		const std::string	_name;
		int					_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */