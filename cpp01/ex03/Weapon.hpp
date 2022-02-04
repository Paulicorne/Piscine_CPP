#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {
	public :
		Weapon(std::string name);
		~Weapon(void);
	
	// std::string getType() const;
	std::string setType(std::string new_type);
	
	private:
		std::string	_type;
};

Weapon*	zombieHorde(int N, std::string name);

#endif