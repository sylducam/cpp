#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:

		static int	 	hitpointsDefault;
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

		std::string getName() const; 
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
};

std::ostream& operator<<(std::ostream& outputFile, ClapTrap const& ct);

#endif
