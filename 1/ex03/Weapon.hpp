#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon
{
	private:
	
		std::string	_type;

	public:

		Weapon(void);
		~Weapon(void);
		void	setType(std::string	_type);
		std::string	getType() const;
};

#endif