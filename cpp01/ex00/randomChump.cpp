#include "Zombie.hpp"

void randomChump(std::string name) // uses stack.
{
	Zombie	z(name);
	z.announce();
}