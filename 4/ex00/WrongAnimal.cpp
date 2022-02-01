#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name): name(name)
{
	std::cout << name << " created." << std::endl;
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
	std::cout << name <<  " destroyed." << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->name);
}
