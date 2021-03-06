#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("DefinitelyNotACat")
{
	std::cout << "A disturbing cat alike " << this->getType() << " is born" << std::endl;
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
	std::cout << "Goodbye " << this->getType() << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "><><><><><><><" << std::endl;
}
