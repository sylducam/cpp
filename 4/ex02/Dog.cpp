#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Create " << this->getType() << std::endl;
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
	delete this->_brain;
	std::cout << "Destroy " << this->getType() << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
