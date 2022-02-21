#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _bName(name)
{	
}

HumanB::~HumanB()
{
}

Weapon& HumanB::getWeapon (void) const
{
	return (*(this->_bWeapon));
}

bool HumanB::setWeapon(Weapon& newWeapon)
{
	
	if(newWeapon.getType() == "")
	{
		std::cout<<"empty string"<<std::endl;
		return(false);
	}
	this->_bWeapon = &newWeapon;
	return(true);
}

void	HumanB::attack(void) const
{
	std::cout << this->_bName << " attacks with their " << this->_bWeapon->getType() << std::endl;
}