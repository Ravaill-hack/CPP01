
#include "Zombie.hpp"

int	main(void)
{
	int	i;
	int	N;
	Zombie* Horde_Of_Zombies;
	
	i = 0;
	N = 7;
	Horde_Of_Zombies = zombieHorde(7, "Horde_Zombie_");
	while (i < N)
	{
		Horde_Of_Zombies[i].announce();
		i++;
	}
	delete[] (Horde_Of_Zombies);
	return (0);
}
