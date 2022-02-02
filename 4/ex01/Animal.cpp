#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "An animal is born" << std::endl;
}

Animal::Animal(std::string name): name(name)
{
	std::cout << "Hello " << name << std::endl;
}

Animal::Animal(Animal const &instance)
{
	*this = instance;
	std::cout << "An animal is born" << std::endl;
}

Animal& Animal::operator=(Animal const &instance) 
{
	this->name = instance.getType();
	return (*this);
}

Animal::~Animal(void) 
{
	std::cout << "Goodbye specimen " << name << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal Sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->name);
}
