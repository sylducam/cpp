#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "A weird new specimen is born" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name): name(name)
{
	std::cout << "Hello " << name << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& instance)
{
	*this = instance;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& instance) 
{
	this->name = instance.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void) 
{
	std::cout << "Goodbye weirdo " << name << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Unknown animalish sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->name);
}
