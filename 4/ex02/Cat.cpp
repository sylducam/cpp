#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat")
{
	std::cout << "Hello "<< this->getType() << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const& instance)
{
	*this = instance;
	std::cout << "Hello "<< this->getType() << std::endl;
}

Cat& Cat::operator=(Cat const& instance) 
{
	this->name = instance.getType();
	return (*this);
}

Cat::~Cat(void) 
{
	delete this->_brain;
	std::cout << this->getType() << " burried" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
