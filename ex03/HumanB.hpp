// #ifndef HUMANB_HPP
// #define HUMANB_HPP
// #include "Weapon.hpp"

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
// 	Weapon myWeapon;
// };
// #endif

#pragma once
#include "Weapon.hpp"

class HumanB
{
public:
	// Constructor/Destructor
	HumanB(std::string name);
	~HumanB(void);

	// Setters
	void setWeapon(Weapon& weapon);

	void attack(void) const;
private:
	std::string _name;
	Weapon* _weapon;
};