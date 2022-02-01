#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
	
		static int _hitPointsDefault;
		static int _energyPointsDefault;
		static int _attackDamageDefault;

		std::string _name;

	public:

		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& instance);
		DiamondTrap& operator=(DiamondTrap const& instance);
		~DiamondTrap(void);

		void attack(const std::string& target);
		void whoAmI(void);

		std::string getName(void) const;
};

#endif
