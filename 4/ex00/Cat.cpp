#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Create " << this->getType() << std::endl;
}

Cat::Cat(Cat const &instance)
{
	*this = instance;
}

Cat& Cat::operator=(Cat const &instance) 
{
	this->name = instance.getType();
	return (*this);
}

Cat::~Cat() 
{
	std::cout << "Destroy " << this->getType() << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;
}
