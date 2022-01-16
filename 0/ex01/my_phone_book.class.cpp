#include "my_phone_book.class.hpp"

start::start(void)
{
	std::string name;
	std::cout << "Welcome to your phone book" << std::endl;
	std::cout << "Type what you want to do : ADD / SEARCH / EXIT" << std::endl;
	std::getline(std::cin, name);
	if (name == "ADD")
		std::cout << "X" << std::endl; // fonction a la place
	else if (name == "SEARCH")
		std::cout << "Y" << std::endl; // fonction a la place
	else if (name == "EXIT")
		std::cout << "Z" << std::endl; // fonction a la place
									   // removes all contacts and quit the prgm
	else
		std::cout << "Wrong entry" << std::endl; // retour d'erreur

}

start::~start(void)
{

}