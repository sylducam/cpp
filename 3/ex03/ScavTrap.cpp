#include "ScavTrap.hpp"

int ScavTrap::hitPointsDefault = 100;
int ScavTrap::energyPointsDefault = 50;
int ScavTrap::attackDamageDefault = 20;

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Create ScavTrap '" << this->getName() << "'." << std::endl;
	this->hitPoints = this->hitPointsDefault;
	this->energyPoints = this->energyPointsDefault;
	this->attackDamage = this->attackDamageDefault;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Create ScavTrap '" << this->getName() << "'." << std::endl;
	this->hitPoints = this->hitPointsDefault;
	this->energyPoints = this->energyPointsDefault;
	this->attackDamage = this->attackDamageDefault;
}

ScavTrap::ScavTrap(ScavTrap const& instance) : ClapTrap(instance)
{
	std::cout << "Create cloned ScavTrap '" << this->getName() << "'." << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& instance)
{
	this->name = instance.getName();
	this->hitPoints = instance.getHitPoints();
	this->energyPoints = instance.getEnergyPoints();
	this->attackDamage = instance.getAttackDamage();
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->getName() << " was destroyed." << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << this->getName() << " enters Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
	if (!this->hasEnoughEnergy())
		return;
	--this->energyPoints;
	std::cout << "[ATTACK] ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " damage points!" << std::endl;
}

