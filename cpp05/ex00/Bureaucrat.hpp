#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

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
		class	GradeTooHighException : public std::exception 
		{
        	public:
        	    virtual const char* what() const throw(); // specifier Throw, at the end of a function definition
				// It means this Throw instruction can throw something or not
		};
		class	GradeTooLowException : public std::exception 
		{
        	public:
        	    virtual const char* what() const throw(); // "throw", at the end of a function definition
				// It means this Throw instruction can throw something or not
		};

	private:
		const std::string	_name;
		int					_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */