#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "An animal is born" << std::endl;
}

AAnimal::AAnimal(std::string name): name(name)
{
	std::cout << "Hello " << name << std::endl;
}

AAnimal::AAnimal(AAnimal const& instance)
{
	*this = instance;
	std::cout << "An animal is born" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const& instance) 
{
	this->name = instance.getType();
	return (*this);
}

AAnimal::~AAnimal(void) 
{
	std::cout << "Goodbye specimen " << name << std::endl;

}

void AAnimal::makeSound(void) const
{
	std::cout << "Animal Sound" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->name);
}
