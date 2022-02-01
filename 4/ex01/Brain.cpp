#include "Brain.hpp"
#include <cstdlib>

static std::string getRandomChars(size_t length)
{
	size_t outSize = (rand() % (length - 10)) + 10;
	std::string out(outSize, 'x');
	for (size_t i = 0; i < outSize; ++i)
	{
		int randomChar = rand() % (26 + 26 + 10);
		if (randomChar < 26)
			out[i] = 'a' + randomChar;
		else if (randomChar < 26 + 26)
			out[i] = 'A' + randomChar - 26;
		else
			out[i] = '0' + randomChar - 26 - 26;
	}
	return (out);
}

Brain::Brain()
{
	for (int i = 0; i < 10; i++)
	{
		this->ideas[i] = getRandomChars(20);
		std::cout << this->ideas[i] << std::endl;
	}
}

Brain::Brain(Brain const& instance)
{
	*this = instance;
}

Brain::~Brain(void) {}

void Brain::operator=(Brain const &instance)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = instance.ideas[i];
}

