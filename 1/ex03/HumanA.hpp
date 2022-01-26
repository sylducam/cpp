#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	private:

		std::string	_name;
		Weapon _weaponType;

	public:

		HumanA(std::string const& name, Weapon& club);
		~HumanA(void);
		void	attack(void) const;

};

#endif