#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB {
	public :
		HumanB(std::string name);
		~HumanB(void);
	
	void	attack(void) const;
	void	setWeapon(Weapon);
	
	private:
		std::string	_name;
		Weapon *_weapon;
};

#endif 