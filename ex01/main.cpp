#include "Zombie.hpp"

int main()
{
	Zombie *muchoZombie;

	muchoZombie = zombieHorde(10, "roger");
	for (int i = 0; i < 12; i++)
		muchoZombie[i].announce();

	return (0);
}