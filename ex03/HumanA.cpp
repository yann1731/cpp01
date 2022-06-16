#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->myWeapon = &weapon;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << myWeapon->getType() << std::endl;
}