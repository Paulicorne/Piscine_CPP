#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	public :
		Weapon(std::string name);
		~Weapon(void);
	
	const std::string& getType() const;
	bool setType(std::string new_type);
	
	private:
		std::string	_type;
};



#endif