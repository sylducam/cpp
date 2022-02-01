#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	protected:
	
		static int hitPointsDefault;
		static int energyPointsDefault;
		static int attackDamageDefault;
	
	public :
	
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& instance);
		FragTrap& operator=(FragTrap const& instance);
		~FragTrap();

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif
