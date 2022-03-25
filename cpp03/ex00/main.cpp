#include "ClapTrap.hpp"
//#include <iostream>

int main( void ) 
{
	ClapTrap	a("Bob");
	int	ennemy_dmg = 5;

	std::cout << a.getName() << " has initially " << a.getHitPts() << " hit points (life)." << std::endl;
	std::cout << a.getName() << " has initially " << a.getNrgPts() << " energy points (mana, action points)." << std::endl;
	std::cout << a.getName() << " has initially " << a.getDamage() << " damage (hit points made to ennemies)." << std::endl;
	std::cout << std::endl;

	a.attack("a cat");

	std::cout << "A cat strikes back, hitting " << a.getName() << ", with a force of " << ennemy_dmg << " points of damage." << std::endl;
	a.takeDamage(ennemy_dmg);
	std::cout << std::endl;

	a.beRepaired(1);
	return 0;
}