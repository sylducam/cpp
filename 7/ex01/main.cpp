#include "iter.hpp"

int main(void)
{
	int array[4] = { 16, 2, 77, 40 };
	for (int i = 0; i < 4; i++)
		std::cout << "main before: " << array[i] << std::endl;
	iter(array, 4, increment);
	for (int i = 0; i < 4; i++)
		std::cout << "main after: " << array[i] << std::endl;
}