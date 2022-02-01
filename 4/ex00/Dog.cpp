#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Hello "<< this->getType() << std::endl;
}

Dog::Dog(Dog const& instance)
{
	*this = instance;
}

Dog& Dog::operator=(Dog const& instance) 
{
	this->name = instance.getType();
	return (*this);
}

Dog::~Dog(void) 
{
	std::cout << this->getType() << " burried" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
