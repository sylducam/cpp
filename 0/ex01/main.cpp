// ajoutes les includes
#include "contact.class.hpp"
// add include of contacts class (hpp) if ever you make one

std::string resize_string (std::string src)
{
	if(src.size() > 9)
	{
		src.resize(9);
		src.append(".");
	}
	return(src);
}

void	search_pb(contact *dir, int i)
{
	int index = 0;
	int	j = 0;
	std::string buffer; 
			if(i == 0)
				std::cout<<"no contact"<<std::endl;
			else
			{
				std::cout << "|" << std::setw(10) << "index";
				std::cout << "|" << std::setw(10) << "first_name";
				std::cout << "|" << std::setw(10) << "last_name";
				std::cout << "|" << std::setw(10) << "nick_name";
				std::cout << "|" << std::endl;
				while(j < i) // pb ici ? dan le code de Nico c'etait !=, pas <
				{
					std::cout << "|" << std::setw(10) << j + 1;
					std::cout << "|" << std::setw(10) << resize_string(dir[j].get_first_name());
					std::cout << "|" << std::setw(10) << resize_string(dir[j].get_last_name());
					std::cout << "|" << std::setw(10) << resize_string(dir[j].get_nickname());
					std::cout << "|" << std::endl;
					j++;
				}
					std::cout<<std::endl<<"index : ";
					std::cin.ignore();
					std::getline(std::cin, buffer);
					index = atoi(buffer.c_str());
					if((index >= 1 && index <= 8) && buffer.size() == 1 && index <= i)
						dir[index - 1].print_attribute();
					else
						std::cout<<"erreur index"<<std::endl;
			}
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
				directory[i].set_contact();
				i++;
			}
		}
		//	std::cout << "X" << std::endl; // fonction a la place
		else if (input.compare("SEARCH") == 0)
			search_pb(directory, i);
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