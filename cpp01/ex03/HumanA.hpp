#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public :
		HumanA(std::string name, Weapon &weapon); // a little "HumanA" instance can't be created without a weapon.
		~HumanA(void);
	
	void	attack(void) const;
	void	setType(Weapon); // setter : modifies the type of the aWeapon
	void	getType(Weapon); // getter : returns the type of the aWeapon
	
	private:
		std::string	_aName; // this human A has a name. You can't change it.
		Weapon* _aWeapon;
};

#endif 