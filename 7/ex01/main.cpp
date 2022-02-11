# include "iter.hpp"

int main(void)
{
	int size;

	int ints[] = {42, 69, 74, 87, 199};
	size = sizeof(ints) / sizeof(*ints);
	iter(ints, size, display);
	std::cout << std::endl << std::endl;

	float floats[] = {42.8f, 74.0f, 199.9f, 87.5f, 69.1f};
	size = sizeof(floats) / sizeof(*floats);
	iter(floats, size, display);
	std::cout << std::endl << std::endl;

	double doubles[] = {42.88, 74.66, 199.99, 87.55, 69.11};
	size = sizeof(doubles) / sizeof(*doubles);
	iter(doubles, size, display);
	std::cout << std::endl << std::endl;

	bool bools[] = {false, true};
	size = sizeof(bools) / sizeof(*bools);
	iter(bools, size, display);
	std::cout << std::endl << std::endl;

	char string[] = "This is a very long sentence blablabla...";
	size = sizeof(string) / sizeof(*string);
	iter(string, size, displayString);
	std::cout << std::endl << std::endl;

	std::string strings[] = {"Hello", "world", "template"};
	size = sizeof(strings) / sizeof(*strings);
	iter(strings, size, display);
	std::cout << std::endl;

// 	return (0);
// }

// class Awesome

// {

// public:

// Awesome( void ) : _n( 42 ) { return; }

// int get( void ) const { return this->_n; }

// private:

// int _n;

// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; } template< typename T >

// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {

// int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?

// Awesome tab2[5];

// iter( tab, 5, print );

// iter( tab2, 5, print );

// return 0;

// }

