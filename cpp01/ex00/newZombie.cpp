#include "Zombie.hpp"

Zombie *newZombie(std::string name) // new is the new malloc() ! Allocates space on the heap
{
	Zombie *z = new Zombie(name);
	return(z);
}
