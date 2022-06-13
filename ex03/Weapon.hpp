// #ifndef WEAPON_HPP
// #define WEAPON_HPP
// #include <string>
// #include <iostream>

// class Weapon
// {
// 	public:
// 	Weapon();
// 	Weapon(std::string);
// 	const std::string	&getType(void);
// 	void				setType(std::string);

// 	private:
// 	std::string type;
// };
// #endif

#pragma once
#include <string>

class Weapon
{
public:
	// Constructors/Destructors
	Weapon(std::string type);
	~Weapon(void);

	// Getters
	std::string const & getType(void) const;

	// Setters
	void setType(std::string type);

private:
	std::string _type;
};