#include "Weapon.hpp"

Weapon::Weapon(const std::string &tool) : _type(tool)
{
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(const std::string &tool)
{
	this->_type = tool;
}

const std::string &Weapon::getType()
{
	const std::string &typeRef = _type;
	return typeRef;
}