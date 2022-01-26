#include "HumanA.hpp"

HumanA::HumanA(std::string name, std::string tool)
{
	this->_weaponType = tool;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _weaponType << std::endl;
}