#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name): name(name)
{
	std::cout << "WrongAnimal " << name << " created." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &instance)
{
	*this = instance;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &instance) 
{
	this->name = instance.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "WrongAnimal " << name <<  " destroyed." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->name);
}
