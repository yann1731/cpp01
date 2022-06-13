// #include "HumanB.hpp"

// HumanB::HumanB(std::string name)
// {
// 	this->name = name;
// }

// void HumanB::attack()
// {
// 	std::cout << name << " attacks with their " << myWeapon.getType() << std::endl;
// }

// void HumanB::setWeapon(Weapon &weapon)
// {
// 	this->myWeapon = weapon;
// }

// std::string HumanB::getName()
// {
// 	return (this->name);
// }

// void HumanB::setName(std::string name)
// {
// 	this->name = name;
// }

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) :
	_name(name)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his ";
	if (this->_weapon)
		std::cout << this->_weapon->getType();
	else
		std::cout << "bare fists";
	std::cout << std::endl;
}