// #include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string name) : _type(name)
{
}

Weapon::~Weapon()
{
}

const std::string Weapon::getType(void) const
{
	return(this->_type);
}

bool	Weapon::setType(std::string newType)
{
	if(newType == "")
	{
		std::cout << "error : empty string"<<std::endl;
		return(false);
	}
	this->_type = newType;
		return(true);
}
