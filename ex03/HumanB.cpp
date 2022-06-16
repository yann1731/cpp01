#include "HumanB.hpp"

// class HumanB
// {
// 	public:
// 	HumanB(std::string name);
// 	void setWeapon(Weapon &weapon);
// 	void setName(std::string name);
// 	std::string getName(void);
// 	void attack();

// 	private:
// 	std::string name;
// 	Weapon *myWeapon;
// };

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->myWeapon = &weapon;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

std::string HumanB::getName()
{
	return this->name;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << myWeapon->getType() << std::endl;
}