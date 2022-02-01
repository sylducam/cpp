#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	protected:
	
		static int hitPointsDefault;
		static int energyPointsDefault;
		static int attackDamageDefault;
	
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
