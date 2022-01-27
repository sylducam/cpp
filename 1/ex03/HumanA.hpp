#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	private:

		std::string	_nameA;
		Weapon& _weaponA;

	public:

		HumanA(const std::string& name, Weapon& club);
		~HumanA(void);
		void	attack(void) const;

};

#endif