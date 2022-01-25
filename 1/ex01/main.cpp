#include "Zombie.hpp"

int	main(int argc, char **argv)
{

	if (argc != 3)
	{
		std::cout << "Usage : ./cemetery <first zombie name> <seconde zombie name>" << std::endl;
		std::cout << "Note that the first zombie will be allocated to the heap and the second one to the stack." << std::endl;
		return (1);
	}
	Zombie *brainlessHorde = zombieHorde(atoi(argv[1]), argv[2]); // try to find a more c++ way to atoi
	delete brainlessHorde;
	return(0);
}