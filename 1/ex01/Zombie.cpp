#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << _name << " died TT" << std::endl;
}

void	Zombie::setBaptism(std::string name)
{
	_name = name;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}