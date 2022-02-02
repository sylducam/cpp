#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	// const AAnimal* animal = new AAnimal();
	// AAnimal animal2;

	std::cout << std::endl;

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	std::cout << std::endl;

	cat->makeSound();
	dog->makeSound();

	delete dog;
	delete cat;
	return 0;
}
