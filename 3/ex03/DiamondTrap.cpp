#include "DiamondTrap.hpp"

int DiamondTrap::_hitPointsDefault = FragTrap::hitPointsDefault;
int DiamondTrap::_energyPointsDefault = ScavTrap::energyPointsDefault;
int DiamondTrap::_attackDamageDefault = FragTrap::attackDamageDefault;

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->name = ClapTrap::getName();
	ClapTrap::name = this->getName() + "_clap_name";
	std::cout << "Create DiamondTrap '" << this->getName() << "'." << std::endl;
	this->hitPoints = this->_hitPointsDefault;
	this->energyPoints = this->_energyPointsDefault;
	this->attackDamage = this->_attackDamageDefault;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "Create DiamondTrap '" << this->getName() << "'." << std::endl;
	this->hitPoints = FragTrap::hitPointsDefault;
	this->energyPoints = ScavTrap::energyPointsDefault;
	this->attackDamage = FragTrap::attackDamageDefault;
}

DiamondTrap::DiamondTrap(DiamondTrap const& instance) : ScavTrap(instance)
{
	std::cout << "Create cloned DiamondTrap '" << this->getName() << "'." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& instance)
{
	this->name = instance.getName();
	this->hitPoints = instance.getHitPoints();
	this->energyPoints = instance.getEnergyPoints();
	this->attackDamage = instance.getAttackDamage();
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->getName() << " was destroyed." << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout	<< "My friends know me as DiamondTrap " << this->getName()
				<< " but you can call me ClapTrap " << ClapTrap::getName() << "." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

std::string DiamondTrap::getName() const
{
	return (this->name);
}
