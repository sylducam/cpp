#include "ClapTrap.hpp"

int ClapTrap::hitpointsDefault = 10;
int ClapTrap::energyPointsDefault = 10;
int ClapTrap::attackDamageDefault = 0;

ClapTrap::ClapTrap(void) : name("nameless"), hitPoints(hitpointsDefault), energyPoints(energyPointsDefault), attackDamage(attackDamageDefault)
{
	std::cout << "Create ClapTrap '" << this->name << "'." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(hitpointsDefault), energyPoints(energyPointsDefault), attackDamage(attackDamageDefault)
{
	std::cout << "Create ClapTrap '" << this->name << "'." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &instance)
{
	*this = instance;
	std::cout << "Create cloned ClapTrap '" << this->name << "'." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &instance)
{
	this->name = instance.getName();
	this->hitPoints = instance.getHitPoints();
	this->energyPoints = instance.getEnergyPoints();
	this->attackDamage = instance.getAttackDamage();
	std::cout << "Create cloned operator ClapTrap '" << this->name << "'." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name << " was destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target) 
{
	if (!this->hasEnoughEnergy())
		return;
	--this->energyPoints;
	std::cout << "[ATTACK] " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if (this->hitPoints == 0)
	{
		std::cout << "[HITTED] " << this->name << " is already dead. Unable to attack a corpse." << std::endl;
	}
	else if (amount >= this->hitPoints)
	{
		this->hitPoints = 0;
		std::cout << "[HITTED] " << this->name << " loose " << amount << " hit points. He die." << std::endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << "[HITTED] " << this->name << " loose " << amount << " hit points. He had now " << this->hitPoints << " hit point." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	if (!this->hasEnoughEnergy())
		return;
	--this->energyPoints;
	this->hitPoints += amount;
	std::cout << "[REPAIRED] " << this->name << " repair " << amount << " hit points. He had now " << this->hitPoints << " hit point." << std::endl;
}

bool ClapTrap::hasEnoughEnergy(void) 
{
	bool enoughEnergy;

	if (this->hitPoints <= 0)
	{
		std::cout << "[ERROR] " << this->name << " is dead, he can't do anything." << std::endl;
		return (false);
	}
	enoughEnergy = this->energyPoints > 0;
	if (!enoughEnergy)
		std::cout << "[ERROR] " << this->name << " has not enough energy ..." << std::endl;
	return (enoughEnergy);
}

std::string ClapTrap::getName(void) const
{
	return (this->name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

std::ostream &operator<<(std::ostream &outputFile, ClapTrap const &ct)
{
	outputFile	<< ct.getName()<< " > "
				<< ct.getHitPoints() << " hp | "
				<< ct.getEnergyPoints() << " energy | "
				<< ct.getAttackDamage() << " attack damage";
	return outputFile;
}
