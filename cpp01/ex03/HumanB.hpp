#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB {
	public :
		HumanB(std::string name);
		~HumanB(void);
	
	void	attack(void) const;
	bool	setWeapon(Weapon& newWeapon); // we have to use reference here, bc w/ a pointer we would have to change the main, and else it would just copy weapon and we couldn't be able to change its type via "club.setType" later.
	Weapon&	getWeapon(void) const;
	
	private:
		std::string	_bName;
		Weapon *_bWeapon;
};

#endif