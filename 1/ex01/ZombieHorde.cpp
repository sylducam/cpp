#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
	Zombie*	brainlessHorde = new Zombie[N];
	for(int i = 0; i <= N; i++)
	{
		brainlessHorde[N].setBaptism(name);
		brainlessHorde[N].announce();
	}
	return(brainlessHorde);
}