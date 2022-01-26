#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class	Weapon
{
	private:
	
		std::string	_type;

	public:

		Weapon(std::string tool);
		~Weapon(void);

		void	setType(std::string	tool);
		const std::string &getType();

};

#endif