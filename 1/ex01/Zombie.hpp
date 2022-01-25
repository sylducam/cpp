#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

/*                         CLASS                         */

class Zombie
{

private:

	std::string	_name;

public:

	Zombie();
	~Zombie();

	void	announce(void) const;
	void	setBaptism(std::string name) const;
};

/*                       FUNCTIONS                       */

Zombie*		zombieHorde(int N, std::string name);

#endif