# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"
# include "Intern.hpp"

int main()
{
	Intern  someRandomIntern;
    Form*   rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
 
    Bureaucrat a("Jean-Pierre", 1);
    std::cout << a << std::endl;
    a.signForm(*rrf);
    a.executeForm(*rrf);
    std::cout << std::endl;

    Form*   scf;
    scf = someRandomIntern.makeForm("schrubbery creation", "Pollux");
    a.signForm(*scf);
    a.executeForm(*scf);
    std::cout << std::endl;

    Form*   ppf;
    ppf = someRandomIntern.makeForm("presidential pardon", "Foulque");
    a.signForm(*ppf);
    a.executeForm(*ppf);
    std::cout << std::endl;

    Form*   gnf;
    gnf = someRandomIntern.makeForm("gnagnagna", "Roberto");

    delete rrf;
    delete scf;
    delete ppf;
    delete gnf; // not necessary bc it hasn't been dynamically alloced
    return (0);
}