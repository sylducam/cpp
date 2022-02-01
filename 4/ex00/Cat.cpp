#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Hello "<< this->getType() << std::endl;
}

Cat::Cat(Cat const& instance)
{
	*this = instance;
}

Cat& Cat::operator=(Cat const& instance) 
{
	this->name = instance.getType();
	return (*this);
}

Cat::~Cat(void) 
{
	std::cout << this->getType() << " burried" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
