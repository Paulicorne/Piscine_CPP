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
		Form( const std::string name, int signGrade, int execGrade, std::string target );
		virtual ~Form(); // had to make this virtual to delete dynamically alloced Form

		Form &		operator=( Form const & rhs );

		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		void				beSigned(Bureaucrat const &buro);
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
		const int			_signGrade;
		const int			_execGrade;
		bool				_signed;
		std::string			_target;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */