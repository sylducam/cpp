#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
	std::cout << _name << " died TT" << std::endl;
}

void	Zombie::announce(void) const // put it in Zobie.cpp
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}