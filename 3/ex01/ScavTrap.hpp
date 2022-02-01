#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	
		static int _hitPointsDefault;
		static int _energyPointsDefault;
		static int _attackDamageDefault;
	
	public :
	
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& instance);
		ScavTrap& operator=(ScavTrap const& instance);
		~ScavTrap(void);

		void attack(const std::string& target);
		void guardGate(void);
};

#endif
