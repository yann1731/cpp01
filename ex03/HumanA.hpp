#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string name, Weapon weapon);
	std::string name;
	Weapon myWeapon;
	void attack();
};