#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string name) : _name (name)
{
	Zombie::announce();
}

Zombie::~Zombie(void)
{
	std::cout << _name << " died TT" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}