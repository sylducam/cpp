#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon tool)
{
// ICI
}

void	HumanB::attack(void) const
{
	std::cout << _nameB << " attacks with their " << _weaponB << std::endl;
}