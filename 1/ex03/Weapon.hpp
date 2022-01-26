#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class	Weapon
{
	private:
	
		std::string	_weaponType;

	public:

		Weapon(std::string tool);
		~Weapon(void);

		void	setType(std::string	tool);
		std::string	getType() const;

};

#endif