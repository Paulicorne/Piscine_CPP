#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _aName(name), _aWeapon(weapon)
{}

HumanA::~HumanA()
{}

void	HumanA::attack(void) const
{
	std::cout << this->_aName << " attacks with their " << this->_aWeapon.getType() << std::endl;
}