#include "Brain.hpp"

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

Brain::Brain(void)
{
	for (int i = 0; i < 10; i++)
	{
		this->_ideas[i] = getRandomChars(20);
		std::cout << this->_ideas[i] << std::endl;
	}
	std::cout << "Bain created." << std::endl;
}

Brain::Brain(Brain const& instance)
{
	*this = instance;
}

Brain::~Brain(void)
{
	std::cout << "Bain destroyed." << std::endl;
}

void Brain::operator=(Brain const& instance)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = instance._ideas[i];
}

