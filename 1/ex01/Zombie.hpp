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

	Zombie(void);
	~Zombie(void);

	void	setBaptism(std::string name);
	void	announce(void) const;
};

/*                       FUNCTIONS                       */

Zombie*		zombieHorde(int N, std::string name);

#endif