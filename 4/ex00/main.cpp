#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	const WrongCat* wrongCat2 = new WrongCat();

	const Animal* animal2 = new Animal("Furball");
	const WrongAnimal* wrongAnimal2 = new WrongAnimal("Wicked");

	std::cout << std::endl;

	std::cout << animal->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wrongCat2->getType() << " " << std::endl;
	std::cout << animal2->getType() << " " << std::endl;
	std::cout << wrongAnimal2->getType() << " " << std::endl;

	std::cout << std::endl;

	cat->makeSound();
	dog->makeSound();
	animal->makeSound(); // without fonction override by child class
	wrongCat->makeSound(); // without virtual
	wrongCat2->makeSound(); // without virtual but type is not the inherited one
	wrongAnimal->makeSound(); // without fonction override by child class
	animal2->makeSound();
	wrongAnimal2->makeSound();

	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;
	delete wrongCat2;
	delete animal2;
	delete wrongAnimal2;
	return 0;
}
