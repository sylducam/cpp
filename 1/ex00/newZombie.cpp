#include "Zombie.hpp"
#include <string>

Zombie* newZombie(std::string name)
{
	Zombie* instanceHeap = new Zombie(name);
	return (instanceHeap);
}
