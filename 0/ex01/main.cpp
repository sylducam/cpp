// ajoutes les includes
#include "my_phone_book.class.hpp"
fonction ADD
	phone_book	instance;


int main()
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
	// 4 - Une fonction dans la classe permet de recuperer lequel des trois
	// et de la, lances l'une des trois actions differente. (je suis brouillon
	// a partir de la car je ne sais pas ce que je vais faire. Besoin de lire
	// mieux la suite du sujet et strategiser)

	// std::cout << "Please, enter your full name: ";
	// std::cout << "Hello, " << name << "!\n";
	return (0);
}