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
	std::cout << "Create cloned ClapTrap '" << this->_name << "'." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &instance)
{
	this->_name = instance.getName();
	this->_hitPoints = instance.getHitPoints();
	this->_energyPoints = instance.getEnergyPoints();
	this->_attackDamage = instance.getAttackDamage();
	std::cout << "Create cloned operator ClapTrap '" << this->_name << "'." << std::endl;
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
	std::cout << "[ATTACK] " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if (this->_hitPoints == 0)
	{
		std::cout << "[HITTED] " << this->_name << " is already dead. Unable to attack a corpse." << std::endl;
	}
	else if (amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << "[HITTED] " << this->_name << " loose " << amount << " hit points. He die." << std::endl;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << "[HITTED] " << this->_name << " loose " << amount << " hit points. He had now " << this->_hitPoints << " hit point." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	if (!this->hasEnoughEnergy())
		return;
	--this->_energyPoints;
	this->_hitPoints += amount;
	std::cout << "[REPAIRED] " << this->_name << " repair " << amount << " hit points. He had now " << this->_hitPoints << " hit point." << std::endl;
}

bool ClapTrap::hasEnoughEnergy() 
{
	bool enoughEnergy;

	if (this->_hitPoints <= 0)
	{
		std::cout << "[ERROR] " << this->_name << " is dead, he can't do anything." << std::endl;
		return (false);
	}
	enoughEnergy = this->_energyPoints > 0;
	if (!enoughEnergy)
		std::cout << "[ERROR] " << this->_name << " has not enough energy ..." << std::endl;
	return (enoughEnergy);
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

std::ostream &operator<<(std::ostream &outputFile, ClapTrap const &ct)
{
	outputFile	<< ct.getName()<< " > "
				<< ct.getHitPoints() << " hp | "
				<< ct.getEnergyPoints() << " energy | "
				<< ct.getAttackDamage() << " attack damage";
	return outputFile;
}
