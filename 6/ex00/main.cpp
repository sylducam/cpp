<<<<<<< HEAD
#include "Scalar.hpp"

int		main(int argc, char **argv)
{

	return (0);
}
=======
#include "Converter.hpp"
#include <stdio.h>

void test(std::string str)
{
	Converter *convert;

	convert = new Converter(str);
	convert->print();
	delete convert;
}

int main(int argc, char **argv)
{
	if (argc == 2)
		test(argv[1]);
	else
		std::cout << "Usage : ./exe_convert <argument>" << std::endl;
	// test("A");
	// std::cout << std::endl;
	// test("*");
	// std::cout << std::endl;
	// test("0");
	// std::cout << std::endl;
	// test("42");
	// std::cout << std::endl;
	// test("-42");
	// std::cout << std::endl;
	// test("42.0f");
	// std::cout << std::endl;
	// test("42.0");
	// std::cout << std::endl;
	// test("42.5");
	// std::cout << std::endl;
	// test("nan");
	// std::cout << std::endl;
	// test("nanf");
	// std::cout << std::endl;
	// test("+inf");
	// std::cout << std::endl;
	// test("-inf");
	// std::cout << std::endl;
	// test("-inff");
	// std::cout << std::endl;
	// test("+inff");
	// std::cout << std::endl;
	// test("400 bad usage");
	// std::cout << std::endl;
	// test("bad");
	// std::cout << std::endl;
	// test("42 ");
	// std::cout << std::endl;
	return 0;
}


>>>>>>> 488e5e28966d88eed9bad7a2ce8ab2cfeed73f9e
