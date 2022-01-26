#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:

		std::string	_name;
		std::string	_weaponType;

	public:

		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon tool);
		void	attack(void) const;

};

#endif