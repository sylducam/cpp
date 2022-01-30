#include "Integer.class.hpp"

int		main(void)
{
	Integer		x(30);
	Integer		y(10);
	Integer		z(0);

	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << y << std::endl;
	y = Integer(12);
	// Integer(5); // calls the class without keeping it in an instance, so constructor and destructor are called in a row
	std::cout << "Value of y : " << y << std::endl;

	std::cout << "Value of z : " << z << std::endl;
	z = x + y;	
	std::cout << "Value of z : " << z << std::endl;
	
	return (0);
}