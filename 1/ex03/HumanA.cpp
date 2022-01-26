#include "HumanA.hpp"

HumanA::HumanA(std::string const& name, Weapon& club) : _name(name), _weaponType(club)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _weaponType.getType() << std::endl;
}