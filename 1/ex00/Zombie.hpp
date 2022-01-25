#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

/*                 CLASS                  */

class Zombie
{

private:

	std::string	_name;

public:

	Zombie(std::string name);
	~Zombie();

	void	announce(void) const;
};

/*               FUNCTIONS                */

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif