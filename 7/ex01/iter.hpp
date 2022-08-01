#include <iostream>

void increment(int* nb)
{
	std::cout << "increment before: " << *nb << std::endl;
	(*nb)++;
	std::cout << "increment after: " << *nb << std::endl;
}

// template <typename T>
void iter(int* array_address, int size, void (*f)(int*))
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

// template <typename T>
// void iter(T* array_address, int size, void (*f)(void *))
// {
// 	int i = 0;
// 	while (i <= size)
// 	{
// 		f(array_address[i]);
// 		i++;
// 	}
// }