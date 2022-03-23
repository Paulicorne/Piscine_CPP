#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

	void 			ClapTrap::attack(const std::string& target)
	{
		target.takeDamage(this.getDamage);
		std::cout << "ClapTrap " << this.getName << " attacks " << target.getName << std::endl;
	}

	void 			ClapTrap::takeDamage(unsigned int amount)
	{}

	void 			ClapTrap::beRepaired(unsigned int amount)
	{}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
	int			getName;
	int			setName;

	int			getHitPts;
	int			setHitPts;

	int			getNrgPts;
	int			setNrgPts;

	int			getDamage;
	int			setDamage;

/* ************************************************************************** */