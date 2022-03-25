#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) 
{
	ClapTrap	a("Bob");
	std::cout << std::endl;

	ScavTrap	b("Johnny");
	int	ennemy_dmg = 5;
	int	heal = 1;
	std::cout << std::endl;

	std::cout << a.getName() << " has initially " << a.getHitPts() << " hit points (life)." << std::endl;
	std::cout << a.getName() << " has initially " << a.getNrgPts() << " energy points (mana, action points)." << std::endl;
	std::cout << a.getName() << " has initially " << a.getDamage() << " damage (hit points made to ennemies)." << std::endl;
	std::cout << std::endl;

	std::cout << b.getName() << " has initially " << b.getHitPts() << " hit points (life)." << std::endl;
	std::cout << b.getName() << " has initially " << b.getNrgPts() << " energy points (mana, action points)." << std::endl;
	std::cout << b.getName() << " has initially " << b.getDamage() << " damage (hit points made to ennemies)." << std::endl;
	std::cout << std::endl;

	//a = b; // this works without additionnal code bc "a" is a ScavTrap, but also a ClapTrap at core (by inheritance)

	b.guardGate();
	b.attack("a random dude passing by");
	//std::cout << b.getName() << " has initially " << b.getNrgPts() << " energy points (mana, action points)." << std::endl;
	std::cout << std::endl;

	b = a; // to make this work, we had to implement ScavTrap&	operator=( ClapTrap const & rhs )
	std::cout << b.getName() << " has now " << b.getHitPts() << " hit points (life)." << std::endl;
	std::cout << b.getName() << " has now " << b.getNrgPts() << " energy points (mana, action points)." << std::endl;
	std::cout << b.getName() << " has now " << b.getDamage() << " damage (hit points made to ennemies)." << std::endl;
	std::cout << std::endl;

	b.beRepaired(heal);
	b.takeDamage(ennemy_dmg);
	std::cout << std::endl;

	ScavTrap	c("Billy");
	std::cout << std::endl;

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

	ScavTrap	d(b); // like the "=" operator, this works because they are both ScavTraps
	//ScavTrap	e(a); // but his won't because "a" is a ClapTrap, ScavTrap class has no such copy constructor
	std::cout << std::endl;

	FragTrap	e("Cletus");
	std::cout << e.getName() << " has initially " << e.getHitPts() << " hit points (life)." << std::endl;
	std::cout << e.getName() << " has initially " << e.getNrgPts() << " energy points (mana, action points)." << std::endl;
	std::cout << e.getName() << " has initially " << e.getDamage() << " damage (hit points made to ennemies)." << std::endl;
	std::cout << std::endl;

	e.highFivesGuys();
	e.attack("it's own self esteem");
	e.beRepaired(heal);

	std::cout << "This bloody cat strikes back again, hitting " << e.getName() << ", causing it " << ennemy_dmg << " points of damage." << std::endl;
	e.takeDamage(ennemy_dmg);
	std::cout << std::endl;

	return 0;
}