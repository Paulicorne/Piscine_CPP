#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/* no need to re-code default and copy constructor */

ScavTrap::ScavTrap( const std::string& name )
{
	this->setName(name);

	/* this notation compiles but has no effect */
	// this->_damage = 20;
	// this->_hitPts = 100;
	// this->_nrgPts = 50;
	
	this->setDamage(20);
	this->setHitPts(100);
	this->setNrgPts(50);


	std::cout << "ScavTrap name constructor called" << std::endl;

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->setDamage(rhs.getDamage());
		this->setHitPts(rhs.getHitPts());
		this->setNrgPts(rhs.getNrgPts());
	}
	std::cout << "ScavTrap " << this->getName() << " has now ScavTrap " << rhs.getName() << "'s attributes !" << std::endl;
	return *this;
}

ScavTrap &				ScavTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->setDamage(rhs.getDamage());
		this->setHitPts(rhs.getHitPts());
		this->setNrgPts(rhs.getNrgPts());
	}

	std::cout << "ScavTrap " << this->getName() << " has now ClapTrap " << rhs.getName() << "'s attributes !" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::guardGate()
{
	std::cout << this->getName() << " is now in GateKeeping mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_nrgPts <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has no Energy Points left, too bad !" << std::endl;
		return;
	}
	this->_nrgPts--;
	std::cout << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage !"<< std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */