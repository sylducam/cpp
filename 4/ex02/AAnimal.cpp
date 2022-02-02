#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Animal default created." << std::endl;
}

AAnimal::AAnimal(std::string name): name(name)
{
	std::cout << "Animal " << name << " created." << std::endl;
}

AAnimal::AAnimal(AAnimal const& instance)
{
	*this = instance;
}

AAnimal& AAnimal::operator=(AAnimal const& instance) 
{
	this->name = instance.getType();
	return (*this);
}

AAnimal::~AAnimal(void) 
{
	std::cout << "Animal " << name <<  " destroyed." << std::endl;
}

void AAnimal::makeSound(void) const
{
	std::cout << "Default Animal Sound" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->name);
}
