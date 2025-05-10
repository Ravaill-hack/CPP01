
#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde (int N, std::string name)
{
	Zombie* horde;
	int		i;

	i = 0;
	horde = new Zombie[N];
	while (i < N)
	{
		std::stringstream	s;
		s << i;
		horde[i].setName(name + s.str());
		i++;
	}
	return (horde);
}
