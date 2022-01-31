#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << "a = "<< a << std::endl;
	std::cout << "++a " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;


/* added to subject's main, to test everything
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a = " << a << std::endl;
	std::cout << "++a" << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a" << std::endl;
	std::cout << --a << std::endl;
	std::cout << "--a" << std::endl;
	std::cout << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a--" << std::endl;
	std::cout << a-- << std::endl;
	std::cout << "a--" << std::endl;
	std::cout << a-- << std::endl;
	std::cout << "a--" << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "b = " << b << std::endl;

	std::cout << "test max(a, b)" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	Fixed const c(Fixed(6.16f) * Fixed(3));

	std::cout << "a = c" << std::endl;
	a = c;
	std::cout << "a = " << a << std::endl;
	std::cout << "a + b" << std::endl;
	std::cout << a + b << std::endl;
	std::cout << "a - b" << std::endl;
	std::cout << a - b << std::endl;
	std::cout << "a * b" << std::endl;
	std::cout << a * b << std::endl;
	std::cout << "a / b" << std::endl;
	std::cout << a / b << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "test a > b" << std::endl;
	if (a > b)
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	std::cout << "test a < b" << std::endl;
	if (a < b)
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	std::cout << "a = b" << std::endl;
	a = b;
	std::cout << "test a <= b" << std::endl;
	if (a <= b)
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	std::cout << "a--" << std::endl;
	std::cout << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "test a >= b" << std::endl;
	if (a >= b)
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	std::cout << "test a == b" << std::endl;
	if (a == b)
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	std::cout << "test a != b" << std::endl;
	if (a != b)
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
*/

	return 0;
}
