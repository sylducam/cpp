#include "FragTrap.hpp"

int FragTrap::_hitPointsDefault = 100;
int FragTrap::_energyPointsDefault = 100;
int FragTrap::_attackDamageDefault = 30;

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Create FragTrap '" << this->getName() << "'." << std::endl;
	this->hitPoints = this->_hitPointsDefault;
	this->energyPoints = this->_energyPointsDefault;
	this->attackDamage = this->_attackDamageDefault;
}

FragTrap::FragTrap(std::string name)  : ClapTrap(name)
{
	std::cout << "Create FragTrap '" << this->getName() << "'." << std::endl;
	this->hitPoints = this->_hitPointsDefault;
	this->energyPoints = this->_energyPointsDefault;
	this->attackDamage = this->_attackDamageDefault;
}

FragTrap::FragTrap(FragTrap const& instance)  : ClapTrap(instance)
{
	std::cout << "Create cloned FragTrap '" << this->getName() << "'." << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& instance)
{
	this->name = instance.getName();
	this->hitPoints = instance.getHitPoints();
	this->energyPoints = instance.getEnergyPoints();
	this->attackDamage = instance.getAttackDamage();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " was destroyed." << std::endl;
}

void FragTrap::attack(const std::string& target) 
{
	if (!this->hasEnoughEnergy())
		return;
	--this->energyPoints;
	std::cout << "[ATTACK] FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " damage points!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "     _.-._" << std::endl;
	std::cout << "    | | | |_" << std::endl;
	std::cout << "    | | | | |" << std::endl;
	std::cout << "  _ |  '-._ |" << std::endl;
	std::cout << "  \\`\\`-.'-._;        " << getName() << ": Give me five !" << std::endl;
	std::cout << "   \\    '   |" << std::endl;
	std::cout << "    \\  .`  /" << std::endl;
	std::cout << "     |    |" << std::endl;
}
