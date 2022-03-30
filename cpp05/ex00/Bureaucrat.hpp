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
		~Bureaucrat();

		Bureaucrat &	operator=( Bureaucrat const & rhs );

		std::string		getName() const;
		int				getGrade() const;


		class	GradeTooHighException : public std::exception 
		{
        	public:
        	    virtual const char* func() const throw() // specifier Throw, at the end of a function definition
				// It means this Throw instruction can throw something or not
        	    {
        	        return ("ERROR Message");
        	    }
		};
		class	GradeTooLowException : public std::exception 
		{
        	public:
        	    virtual const char* func() const throw() // specifier Throw, at the end of a function definition
				// It means this Throw instruction can throw something or not
        	    {
        	        return ("ERROR Message");
        	    }
		};

	private:
		std::string		_name;
		int				_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */