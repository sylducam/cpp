#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:

		static int	 	hitPointsDefault;
		static int	 	energyPointsDefault;
		static int	 	attackDamageDefault;

		std::string 	name;
		unsigned int 	hitPoints;
		unsigned int 	energyPoints;
		unsigned int 	attackDamage;
		
		bool hasEnoughEnergy();

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& instance);
		ClapTrap& operator=(ClapTrap const& instance);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string	getName(void) const; 
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int 		getAttackDamage(void) const;
};

std::ostream& operator<<(std::ostream& output_file, ClapTrap const& clap_trap);

#endif
