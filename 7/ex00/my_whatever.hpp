#include <iostream>

template<typename T>

T const& max(T const& a, T const& b)
{
	return (a >= b ? a : b);
}