#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB {
	public :
		HumanB(std::string name);
		~HumanB(void);
	
	void	attack(void) const;
	bool	setWeapon(Weapon& newWeapon);
	Weapon&	getWeapon(void) const;
	
	private:
		std::string	_bName;
		Weapon *_bWeapon;
};

#endif