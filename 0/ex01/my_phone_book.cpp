#include "my_phone_book.hpp"

start::start(void)
{
	std::string name;
	std::cout << "Welcome to your phone book" << std::endl;
	std::cout << "Type what you want to do : ADD / SEARCH / EXIT" << std::endl;
	std::getline(std::cin, name);
}

start::~start(void) {}

int main()
{
	start	instance;
	
	// 4 - Une fonction dans la classe permet de recuperer lequel des trois
	// et de la, lances l'une des trois actions differente. (je suis brouillon
	// a partir de la car je ne sais pas ce que je vais faire. Besoin de lire
	// mieux la suite du sujet et strategiser)

	// std::cout << "Please, enter your full name: ";
	// std::cout << "Hello, " << name << "!\n";
	return (0);
}
