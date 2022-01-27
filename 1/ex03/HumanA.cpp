#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon& club) : _nameA(name), _weaponA(club)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void) const
{
	std::cout << _nameA << " attacks with their " << _weaponA.getType() << std::endl;
}