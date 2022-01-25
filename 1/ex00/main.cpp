#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Usage : ./cemetery <first zombie name> <seconde zombie name>" << std::endl;
		std::cout << "Note that the first zombie will be allocated to the heap and the second one to the stack." << std::endl;
		return (-1);
	}
	Zombie *heapedZombie = newZombie(argv[1]);
	delete heapedZombie;
	randomChump(argv[2]);
	return (0);
}