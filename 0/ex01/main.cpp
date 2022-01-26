#include "contact.class.hpp"

std::string resize_string (std::string src)
{
	if(src.size() > 9)
	{
		src.resize(9);
		src.append(".");
	}
	return(src);
}

void	search_phone_book(contact *dir, int i)
{
	int			index = 0;
	int			j = 0;
	std::string input;
	bool		found = false;
	while(found == false)
	{
		if(i == 0)
		{
			std::cout << "Your phone book is empty. Try adding some contacts." << std::endl;
			found = true;
		}
		else
		{
			std::cout << "|" << std::setw(10) << "index";
			std::cout << "|" << std::setw(10) << "first_name";
			std::cout << "|" << std::setw(10) << "last_name";
			std::cout << "|" << std::setw(10) << "nick_name";
			std::cout << "|" << std::endl;
			while(j < i)
			{
				std::cout << "|" << std::setw(10) << j + 1;
				std::cout << "|" << std::setw(10) << resize_string(dir[j].get_first_name());
				std::cout << "|" << std::setw(10) << resize_string(dir[j].get_last_name());
				std::cout << "|" << std::setw(10) << resize_string(dir[j].get_nickname());
				std::cout << "|" << std::endl;
				j++;
			}
				std::cout<<std::endl<<"Please type the index of the desired contact" << std::endl;
				std::getline(std::cin, input);
				index = atoi(input.c_str());
				if((index >= 1 && index <= 8) && input.size() == 1 && index <= i)
				{
					dir[index - 1].print_contact();
					found = true;
				}
				else
				{
					std::cout<<"Unexisting index, try again."<<std::endl;
					j = 0;
				}
		}
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
		std::cout << "What can I do you for ? ADD / SEARCH / EXIT" << std::endl;
		if(std::getline(std::cin, input) == 0)
			return(0);
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
		else if (input.compare("SEARCH") == 0)
			search_phone_book(directory, i);
		else if (input.compare("EXIT") == 0)
		{
			exit = true;
			std::cout << "Bye bye dear user !" << std::endl;
		}
		else
			std::cout << "Wrong entry, try again." << std::endl;
	}
	return (0);
}