#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << myWeapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
	myWeapon = weapon;
}