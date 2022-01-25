#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* instanceHeap = new Zombie(name);
	return (instanceHeap);
}
