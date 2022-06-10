#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->name << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...";
}

void Zombie::setName(std::string name)
{
	this->name = name;
}