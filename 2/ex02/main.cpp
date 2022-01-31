#include "Fixed.hpp"

int main(void) 
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;


	Fixed const c(Fixed(6.16f) * Fixed(3));

	a = c;	
	std::cout << a << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a << std::endl;
	if (a > b)
		std::cout <<"a > b" << std::endl;
	else
		std::cout <<"a !< b" << std::endl;
	if (a < b)
		std::cout <<"a < b" << std::endl;
	else
		std::cout <<"a !> b" << std::endl;
	a = b;
	if (a <= b)
		std::cout <<"a <= b" << std::endl;
	else
		std::cout <<"a !<= b" << std::endl;
	std::cout << a++ << std::endl;
	if (a >= b)
		std::cout <<"a >= b" << std::endl;
	else
		std::cout <<"a !>= b" << std::endl;
	std::cout << a > b << std::endl;
	std::cout << a << std::endl;
	std::cout << a < b << std::endl;
	std::cout << a << std::endl;
	std::cout << a >= b << std::endl;
	std::cout << a << std::endl;
	std::cout << a <= b << std::endl;
	std::cout << a << std::endl;
	std::cout << a <= b << std::endl;

	return 0;
}
