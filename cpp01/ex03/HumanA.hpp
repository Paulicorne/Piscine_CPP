#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public :
		HumanA(std::string name, Weapon& weapon); // a little "HumanA" instance can't be created without a weapon, but the weapon itself can always be modified, it will effect HumanA's weapon, as it is a ref to it.
		~HumanA(void);
	
	void	attack(void) const;
	void	setType(Weapon); // setter : modifies the type of the aWeapon (no need to dereference)
	void	getType(Weapon); // getter : returns the type of the aWeapon (no need to dereference)
	
	private:
		std::string	_aName; // this human A has a name. You can't change it.
		Weapon& _aWeapon;	// we can see the weapon is not a copy of the one passed at init, it is a reference to it.
};

#endif 