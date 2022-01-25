#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <sstream>

/*                         CLASS                         */

class Zombie
{

private:

	std::string	_name;

public:

	Zombie();
	~Zombie();

	void	setBaptism(std::string name);
	void	announce(void) const;
};

/*                       FUNCTIONS                       */

Zombie*		zombieHorde(int N, std::string name);

#endif