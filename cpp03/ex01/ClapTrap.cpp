#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	this->_damage = 0;
	this->_hitPts = 10;
	this->_nrgPts = 10;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(src);
}

ClapTrap::ClapTrap(const std::string& name )
{
	this->setName(name);

	this->_damage = 0;
	this->_hitPts = 10;
	this->_nrgPts = 10;
	std::cout << "Name constructor called" << std::endl;
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
	if ( this != &rhs )
	{
		this->setName(rhs.getName() + "'s copy");
		this->setDamage(rhs.getDamage());
		this->setHitPts(rhs.getHitPts());
		this->setNrgPts(rhs.getNrgPts());
	}
	std::cout << "ClapTrap " << this->getName() << " has now ClapTrap " << rhs.getName() << "'s attributes !" << std::endl;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

// Quand ClapTrap attaque, sa cible perd <attack damage> hit points. Quand ClapTrap
// se répare, il regagne <amount> hit points. Les actions attaquer et réparer coûtent chacune
// 1 point d’énergie. Bien entendu, ClapTrap ne peut exécuter aucune action s’il n’a plus
// de vie ou d’énergie.

void 			ClapTrap::attack(const std::string& target)
{
	if (this->_nrgPts <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has no Energy Points left, too bad !" << std::endl;
		return;
	}
	this->_nrgPts--;
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage !"<< std::endl;
}
void 			ClapTrap::takeDamage(unsigned int amount)
{
	if ((this->_hitPts == 0) || (this->_hitPts - (int)amount <= 0))
	{
		std::cout << "ClapTrap " << this->getName() << " is dead." << std::endl;
		if (this->_hitPts != 0)
			this->_hitPts = 0;
		return;
	}
	this->_hitPts -= amount;
	std::cout << "ClapTrap " << this->getName() << " has now " << this->getHitPts() << " hit points left." << std::endl;
}

void 			ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPts <= 0)
	{
		std::cout << "Well tried, but ClapTrap " << this->getName() << " is already dead. You can't make it repair itself." << std::endl;
		return;
	}
	if (this->_nrgPts == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has no Energy Points left, too bad !" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->getName() << " is repairing itself by " << amount << " points." << std::endl;
	this->_hitPts += amount;
	this->_nrgPts--;
	std::cout << "ClapTrap " << this->getName() << " has now " << this->getHitPts() << " hit points left." << std::endl;
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	ClapTrap::getName(void) const
{
	return(this->_name);
}
void				ClapTrap::setName(const std::string& name)
{
	this->_name = name;
}

int					ClapTrap::getHitPts(void) const
{
	return(this->_hitPts);
}
void				ClapTrap::setHitPts(int const life)
{
	this->_hitPts = life;
}

int					ClapTrap::getNrgPts(void) const
{
	return(this->_nrgPts);
}
void				ClapTrap::setNrgPts(int const energy)
{
	this->_nrgPts = energy;
}

int					ClapTrap::getDamage(void) const
{
	return(this->_damage);
}
void					ClapTrap::setDamage(int const damage)
{
	this->_damage = damage;
}

/* ************************************************************************** */