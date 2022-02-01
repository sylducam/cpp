#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Create " << this->getType() << std::endl;
}

Cat::Cat(Cat const &instance)
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
	delete this->_brain;
	std::cout << "Destroy " << this->getType() << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
