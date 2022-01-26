#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class	Weapon
{
	private:
	
		std::string	_type;

	public:

		Weapon(std::string type);
		~Weapon(void);

		void	setType(std::string	type);
		std::string	getType() const;

};

#endif