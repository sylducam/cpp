#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define HIT_POINT 100
# define ENERGY_POINT 100
# define ATTACK_DAMAGE 30

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
		FragTrap &operator=(FragTrap const &instance);
		~FragTrap();

		void highFivesGuys(void);
};

#endif
