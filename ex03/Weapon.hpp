#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon
{
	public:
	Weapon();
	Weapon(std::string);
	const std::string	&getType(void);
	void				setType(std::string);

	private:
	std::string type;
};
#endif
