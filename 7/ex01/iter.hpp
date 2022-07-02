#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void iter(T array[], int const len, void f(T const &param))
{
	int i = 0;
	while (i < len)
		f(array[i++]);
}

template<typename T>
void display(T const &value)
{
	std::cout << value << " ";
}

template<typename T>
void displayString(T const &value)
{
	std::cout << value;
}

#endif