#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Create " << this->getType() << std::endl;
}

Dog::Dog(Dog const &instance)
{
	*this = instance;
}

Dog& Dog::operator=(Dog const &instance) 
{
	this->name = instance.getType();
	return (*this);
}

Dog::~Dog() 
{
	std::cout << "Destroy " << this->getType() << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woaf woaf !" << std::endl;
}
