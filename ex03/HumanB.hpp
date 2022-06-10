#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(std::string);
	std::string name;
	Weapon myWeapon;
	void setWeapon(Weapon);
	void attack();
};