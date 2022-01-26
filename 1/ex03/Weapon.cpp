#include "Weapon.hpp"

Weapon::Weapon(std::string tool) : _type(tool)
{
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType()
{
	return(this->_type);
}

void	Weapon::setType(std::string	tool)
{
	this->_type = tool;
}