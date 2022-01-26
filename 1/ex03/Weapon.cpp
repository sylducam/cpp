#include "Weapon.hpp"

Weapon::Weapon(std::string tool) : _weaponType(tool)
{
}

Weapon::~Weapon(void)
{
}

std::string	Weapon::getType() const
{
	return(this->_weaponType);
}

void	Weapon::setType(std::string	tool)
{
	this->_weaponType = tool;
}