#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	private:

		std::string	_name;
		std::string	_weaponType;

	public:

		HumanA(std::string name, std::string tool);
		~HumanA(void);
		void	attack(void) const;

};

#endif