#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA {
	public :
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);
	
	void	attack(void) const;
	void	setType(Weapon);
	void	getType(Weapon);
	
	private:
		std::string	_name;
		Weapon _weapon;
};

#endif 