#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	int size = 10;
	Animal *animals[size];

	for (int i = 0; i < size / 2; ++i)
	{
		animals[i] = new Dog();
	}
	for (int i = size / 2; i < size; ++i)
	{
		animals[i] = new Cat();
	}

	for (int i = 0; i < size; ++i)
	{
		delete animals[i];
	}
	Animal bill;
	Animal boule(bill);
	Brain	sprouitch;
	Brain	fluf(sprouitch);
	Brain	sprouft;
	sprouft = sprouitch;
}
