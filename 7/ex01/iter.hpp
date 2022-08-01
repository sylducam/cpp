#include <iostream>

template <typename T>
void increment(T* value)
{
	std::cout << "increment before: " << *value << std::endl;
	(*value)++;
	std::cout << "increment after: " << *value << std::endl;
}

template <typename T>
void iter(T* array_address, int size, void (*f)(T*))
{
	int i = 0;
	while (i <= size)
	{
		std::cout << "iter before: " << array_address[i] << std::endl;
		f(&array_address[i]);
		std::cout << "iter after: " << array_address[i] << std::endl;
		i++;
	}
}