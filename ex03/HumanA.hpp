// #ifndef HUMANA_HPP
// #define HUMANA_HPP
// #include "Weapon.hpp"

// class HumanA
// {
// 	public:
// 	HumanA(std::string name, Weapon &weapon);
// 	std::string name;
// 	Weapon myWeapon;
// 	void attack();
// };
// #endif

#pragma once
#include "Weapon.hpp"

class HumanA
{
public:
	// Constructor/Destructor
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void attack(void) const;
private:
	std::string _name;
	Weapon& _weapon;
};