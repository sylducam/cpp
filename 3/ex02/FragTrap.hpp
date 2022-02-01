#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	
		static int _hitPointsDefault;
		static int _energyPointsDefault;
		static int _attackDamageDefault;
	
	public :
	
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& instance);
		FragTrap& operator=(FragTrap const& instance);
		~FragTrap();

		void highFivesGuys(void);
};

#endif
