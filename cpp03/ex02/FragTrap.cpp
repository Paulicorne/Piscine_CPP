#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap( const std::string& name )
{
	this->setName(name);

	this->setDamage(30);
	this->setHitPts(100);
	this->setNrgPts(100);


	std::cout << "FragTrap name constructor called" << std::endl;

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/




/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " : \"Hey guys !! High five !!\"" << std::endl;
	std::cout << this->getName() << " : \" Guys ?..\" " << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->getNrgPts() <= 0)
	{
		std::cout << "FragTrap " << this->getName() << " has no Energy Points left, too bad !" << std::endl;
		return;
	}
	this->setNrgPts(this->getNrgPts() - 1);
	std::cout << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage !"<< std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */