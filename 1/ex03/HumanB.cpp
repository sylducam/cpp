#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _nameB(name)
{
	_weaponB = NULL;
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon &tool)
{
	this->_weaponB = &tool;
}

void	HumanB::attack(void) const
{
	std::cout << _nameB << "attacks with their ";
	if (_weaponB == NULL)
		std::cout << "special attack SlaPinDafACe" << std::endl;
	else
		std::cout << _weaponB->getType() << std::endl;
}