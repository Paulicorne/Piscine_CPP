#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form();
		Form( Form const & src );
		Form( const std::string name, int signGrade, int execGrade );
		~Form();

		Form &		operator=( Form const & rhs );

		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		void				beSigned(Bureaucrat const &buro);

		/* adding a pure virtual func to make this class absctract */
		virtual void		execute( Bureaucrat const &executor ) const = 0;

		void				setTarget( std::string target );
		std::string			getTarget() const;

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
		class AlreadySignedException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class NotYetSignedException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};


	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
		std::string			_target;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */