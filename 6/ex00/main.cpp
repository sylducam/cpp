#include "Converter.hpp"
#include <stdio.h>

void test(std::string str)
{
	Converter *convert;

	std::cout << "Test for '" << str << "' :" << std::endl;
	convert = new Converter(str);
	convert->print();
	delete convert;
}

int main(void)
{
	test("A");
	std::cout << std::endl;
	test("*");
	std::cout << std::endl;
	test("0");
	std::cout << std::endl;
	test("42");
	std::cout << std::endl;
	test("-42");
	std::cout << std::endl;
	test("42.0f");
	std::cout << std::endl;
	test("42.0");
	std::cout << std::endl;
	test("42.5");
	std::cout << std::endl;
	test("nan");
	std::cout << std::endl;
	test("400 bad usage");
	std::cout << std::endl;
	test("bad");
	std::cout << std::endl;
	test("bad usage");
	std::cout << std::endl;
	test("42 ");
	std::cout << std::endl;
	test("FR");
	return 0;
}


