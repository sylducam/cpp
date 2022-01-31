#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:

		static int _hitPointsDefault;
		static int _energyPointsDefault;
		static int _attackDamageDefault;

		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
		bool hasEnoughEnergy();

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& instance);
		ClapTrap &operator=(ClapTrap const &instance);
		~ClapTrap();

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName() const; 
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
};

std::ostream &operator<<(std::ostream &output_file, ClapTrap const &ct);

#endif
