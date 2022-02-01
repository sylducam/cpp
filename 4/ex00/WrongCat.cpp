#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Create " << this->getType() << std::endl;
}

WrongCat::WrongCat(WrongCat const& instance)
{
	*this = instance;
}

WrongCat& WrongCat::operator=(WrongCat const& instance) 
{
	this->name = instance.getType();
	return (*this);
}

WrongCat::~WrongCat(void) 
{
	std::cout << "Destroy " << this->getType() << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "><><><><><><><" << std::endl;
}
