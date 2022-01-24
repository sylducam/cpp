#include "Zombie.hpp"
#include <iostream> // needed ? I don't think so
#include <string>

Zombie* newZombie(std::string name)
{
	Zombie* instanceHeap = new Zombie(name);
	return (instanceHeap);
}
