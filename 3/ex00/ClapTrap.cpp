#include "ClapTrap.hpp"

int ClapTrap::_hitPointsDefault = 10;
int ClapTrap::_energyPointsDefault = 10;
int ClapTrap::_attackDamageDefault = 0;

ClapTrap::ClapTrap(void) : _name("nameless"), _hitPoints(_hitPointsDefault), _energyPoints(_energyPointsDefault), _attackDamage(_attackDamageDefault)
{
	std::cout << "Create ClapTrap '" << this->_name << "'." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(_hitPointsDefault), _energyPoints(_energyPointsDefault), _attackDamage(_attackDamageDefault)
{
	std::cout << "Create ClapTrap '" << this->_name << "'." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& instance)
{
	*this = instance;
	std::cout << "Create cloned ClapTrap from '" << this->_name << "'." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &instance)
{
	this->_name = instance.getName();
	this->_hitPoints = instance.getHitPoints();
	this->_energyPoints = instance.getEnergyPoints();
	this->_attackDamage = instance.getAttackDamage();
	std::cout << "Operator function called to clone '" << this->_name << "'." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " was destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target) 
{
	if (!this->hasEnoughEnergy())
		return;
	--this->_energyPoints;
	std::cout << "[ATTACK] " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " damage points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if (this->_hitPoints == 0)
	{
		std::cout << "[HIT] " << this->_name << " is already dead." << std::endl;
	}
	else if (amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << "[HIT] " << this->_name << " looses " << amount << " hit points. He die." << std::endl;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << "[HIT] " << this->_name << " looses " << amount << " hit points. He now has " << this->_hitPoints << " hit points." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	if (!this->hasEnoughEnergy())
		return;
	--this->_energyPoints;
	this->_hitPoints += amount;
	std::cout << "[REPAIRED] " << this->_name << " repairs " << amount << " hit points. He now has " << this->_hitPoints << " hit points." << std::endl;
}

bool ClapTrap::hasEnoughEnergy() 
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "[ERROR] " << this->_name << " is dead, he can't do anything." << std::endl;
		return (false);
	}
	if (this->_energyPoints > 0)
		return (true);
	else
		std::cout << "[ERROR] " << this->_name << " has not enough energy..." << std::endl;
		return (false);
	return (true);
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

int ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

std::ostream &operator<<(std::ostream &output_file, ClapTrap const &clap_trap)
{
	output_file	<< clap_trap.getName() << " > "
				<< clap_trap.getHitPoints() << " hp | "
				<< clap_trap.getEnergyPoints() << " energy | "
				<< clap_trap.getAttackDamage() << " attack damage";
	return output_file;
}
