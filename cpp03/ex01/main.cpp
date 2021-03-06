#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) 
{
	ClapTrap	a("Bob");
	std::cout << std::endl;

	ScavTrap	b("Johnny");
	int	ennemy_dmg = 5;
	int	heal = 1;


	std::cout << b.getName() << " has initially " << b.getHitPts() << " hit points (life)." << std::endl;
	std::cout << b.getName() << " has initially " << b.getNrgPts() << " energy points (mana, action points)." << std::endl;
	std::cout << b.getName() << " has initially " << b.getDamage() << " damage (hit points made to ennemies)." << std::endl;
	std::cout << std::endl;

	//a = b; // this works without additionnal code bc "a" is a ScavTrap, but also a ClapTrap at core (by inheritance)
	std::cout << a.getName() << " has initially " << a.getHitPts() << " hit points (life)." << std::endl;
	std::cout << a.getName() << " has initially " << a.getNrgPts() << " energy points (mana, action points)." << std::endl;
	std::cout << a.getName() << " has initially " << a.getDamage() << " damage (hit points made to ennemies)." << std::endl;
	std::cout << std::endl;

	b.guardGate();
	b.attack("a random dude passing by");
	std::cout << std::endl;

	b = a; // to make this work, we had to implement ScavTrap&	operator=( ClapTrap const & rhs )
	std::cout << b.getName() << " has now " << b.getHitPts() << " hit points (life)." << std::endl;
	std::cout << b.getName() << " has now " << b.getNrgPts() << " energy points (mana, action points)." << std::endl;
	std::cout << b.getName() << " has now " << b.getDamage() << " damage (hit points made to ennemies)." << std::endl;
	std::cout << std::endl;

	ScavTrap	c("Billy");

	b = c;
	std::cout << b.getName() << " has now " << b.getHitPts() << " hit points (life)." << std::endl;
	std::cout << b.getName() << " has now " << b.getNrgPts() << " energy points (mana, action points)." << std::endl;
	std::cout << b.getName() << " has now " << b.getDamage() << " damage (hit points made to ennemies)." << std::endl;
	std::cout << std::endl;

	a.attack("a cat");

	std::cout << "A cat strikes back, hitting " << a.getName() << ", causing " << ennemy_dmg << " points of damage to " << a.getName() << "." << std::endl;
	a.takeDamage(ennemy_dmg);
	std::cout << std::endl;

	a.beRepaired(heal);
	std::cout << std::endl;
	std::cout << std::endl;

	b.attack("a dog");

	std::cout << "The good boy strikes back, hitting " << b.getName() << ", causing " << ennemy_dmg << " points of damage to " << b.getName() << "." << std::endl;
	b.takeDamage(ennemy_dmg);
	std::cout << std::endl;

	b.beRepaired(heal);
	std::cout << std::endl;

	ScavTrap	d(b); // like the "=" operator, this works because they are both ScavTraps
	ScavTrap	e(d);
	std::cout << d.getName() << " has initially " << d.getHitPts() << " hit points (life)." << std::endl;
	std::cout << d.getName() << " has initially " << d.getNrgPts() << " energy points (mana, action points)." << std::endl;
	std::cout << d.getName() << " has initially " << d.getDamage() << " damage (hit points made to ennemies)." << std::endl;
	std::cout << std::endl;
	//ScavTrap	f(a); // but his won't because "a" is a ClapTrap, ScavTrap class has no such copy constructor
	return 0;
}