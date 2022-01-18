// ajoutes les includes
#include "contact.class.hpp"
// add include of contacts class (hpp) if ever you make one

void	add_contact()
{
	{
		std::cout << "The 8 contacts limit of your phone book has been reached.\
		 You can't add anymore contacts." << std::endl;
		return;
	}
	return;
}

int main(void)
{
	contact		directory[8];
	bool		exit = false;
	int			i = 0;
	std::string input;
	std::cout << "Hi, I am your phone book !" << std::endl;
	while (exit == false)
	{
			// std::cout << "" // finis ca et sois sur que la condition est bonne
		std::cout << "What can I do you for ? ADD / SEARCH / EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			if (i == 8)
				std::cout << "You have reached the 8 contacts limit." << std::endl;
			else
			{
				add_contact(); // add_contact + define function in class
				i++;
			}
		}
		//	std::cout << "X" << std::endl; // fonction a la place
		else if (input.compare("SEARCH") == 0)
			std::cout << "Y" << std::endl; // fonction a la place
		else if (input.compare("EXIT") == 0)
		{
			exit = true;
			std::cout << "Bye bye dear user !" << std::endl;
		}
		else
			std::cout << "Wrong entry." << std::endl; // retour d'erreur
	}
	// 4 - Une fonction dans la classe permet de recuperer lequel des trois
	// et de la, lances l'une des trois actions differente. (je suis brouillon
	// a partir de la car je ne sais pas ce que je vais faire. Besoin de lire
	// mieux la suite du sujet et strategiser)

	// std::cout << "Please, enter your full input: ";
	// std::cout << "Hello, " << input << "!\n";
	return (0);
}