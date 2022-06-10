#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
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