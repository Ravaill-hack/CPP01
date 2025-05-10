
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Je cree des zombies dans la heap" <<std::endl;
	Zombie* gregoire_heap = newZombie("Gregoire le zombie de la heap");
	gregoire_heap->announce();
	Zombie* magalie_heap = newZombie("Magalie la zombie de la heap");
	magalie_heap->announce();
	Zombie* jardinier_heap = newZombie("Le jardinier fou, zombie de la heap");
	jardinier_heap->announce();
	std::cout << "Je cree des zombies dans la stack" <<std::endl;
	randomChump("Eglantine la factrice zombie");
	randomChump("Une asperge sauvage zombie");
	randomChump("Pamela la zombie");
	delete (gregoire_heap);
	delete (magalie_heap);
	delete (jardinier_heap);
}
