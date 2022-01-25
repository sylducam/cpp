#include "Zombie.hpp"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Usage : ./horde <amount_of_zombies> <name>" << std::endl;
		return (-1);
	}
	std::stringstream stream;
	int N;
	stream << argv[1];
	stream >> N;
	if (stream.fail())
	{
		stream.clear();
		return (-1);
	}
	Zombie *brainlessHorde = zombieHorde(N, argv[2]);
	delete brainlessHorde;
	return (0);
}