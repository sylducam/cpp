#include "ClapTrap.hpp"

int ClapTrap::hitPointsDefault = 10;
int ClapTrap::energyPointsDefault = 10;
int ClapTrap::attackDamageDefault = 0;

ClapTrap::ClapTrap(void) : name("nameless"), hitPoints(hitPointsDefault), energyPoints(energyPointsDefault), attackDamage(attackDamageDefault)
{
	std::cout << "Create ClapTrap '" << this->name << "'." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(hitPointsDefault), energyPoints(energyPointsDefault), attackDamage(attackDamageDefault)
{
	std::cout << "Create ClapTrap '" << this->name << "'." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& instance)
{
	*this = instance;
	std::cout << "Create cloned ClapTrap from '" << this->name << "'." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &instance)
{
	this->name = instance.getName();
	this->hitPoints = instance.getHitPoints();
	this->energyPoints = instance.getEnergyPoints();
	this->attackDamage = instance.getAttackDamage();
	std::cout << "Operator function called to clone '" << this->name << "'." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->name << " was destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target) 
{
	if (!this->hasEnoughEnergy())
		return;
	--this->energyPoints;
	std::cout << "[ATTACK] " << this->name << " attacks " << target << ", causing " << this->attackDamage << " damage points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if (this->hitPoints == 0)
	{
		std::cout << "[HIT] " << this->name << " is already dead." << std::endl;
	}
	else if (amount >= this->hitPoints)
	{
		this->hitPoints = 0;
		std::cout << "[HIT] " << this->name << " looses " << amount << " hit points. He die." << std::endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << "[HIT] " << this->name << " looses " << amount << " hit points. He now has " << this->hitPoints << " hit points." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	if (!this->hasEnoughEnergy())
		return;
	--this->energyPoints;
	this->hitPoints += amount;
	std::cout << "[REPAIRED] " << this->name << " repairs " << amount << " hit points. He now has " << this->hitPoints << " hit points." << std::endl;
}

bool ClapTrap::hasEnoughEnergy() 
{
	if (this->hitPoints <= 0)
	{
		std::cout << "[ERROR] " << this->name << " is dead, he can't do anything." << std::endl;
		return (false);
	}
	if (this->energyPoints > 0)
		return (true);
	else
		std::cout << "[ERROR] " << this->name << " has not enough energy..." << std::endl;
		return (false);
	return (true);
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

int ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints);
}

int ClapTrap::getAttackDamage() const
{
	return (this->attackDamage);
}

std::ostream &operator<<(std::ostream &output_file, ClapTrap const &clap_trap)
{
	output_file	<< clap_trap.getName() << " > "
				<< clap_trap.getHitPoints() << " hp | "
				<< clap_trap.getEnergyPoints() << " energy | "
				<< clap_trap.getAttackDamage() << " attack damage";
	return output_file;
}
