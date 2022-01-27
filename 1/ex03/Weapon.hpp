#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class	Weapon
{
	private:
	
		std::string	_type;

	public:

		Weapon(const std::string &tool);
		~Weapon(void);

		void	setType(const std::string &tool);
		const std::string &getType();

};

#endif