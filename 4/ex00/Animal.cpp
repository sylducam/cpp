#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default created." << std::endl;
}

Animal::Animal(std::string name): name(name)
{
	std::cout << "Animal " << name << " created." << std::endl;
}

Animal::Animal(Animal const &instance)
{
	*this = instance;
}

Animal& Animal::operator=(Animal const &instance) 
{
	this->name = instance.getType();
	return (*this);
}

Animal::~Animal(void) 
{
	std::cout << "Animal " << name <<  " destroyed." << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Default Animal Sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->name);
}
