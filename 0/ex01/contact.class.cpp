
#include "contact.class.hpp"

contact::contact(void)
{
	return;
}

contact::~contact(void)
{
	return;
}

void	contact::set_contact()
{
	// je ne pense pas avoir besoin de ignore, car je n'utilise jamais le cin
	// j'utilise toujours getline, mais verifies au cas ou.
	std::cout << "Please fill your new contact's details" << std::endl;
	std::cout << "First name: " << std::endl;
	std::getline(std::cin, this->_first_name);
	std::cout << "Last name: " << std::endl;
	std::getline(std::cin, this->_last_name);
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, this->_nickname);
	std::cout << "Phone number: " << std::endl;
	std::getline(std::cin, this->_phone_number);
	std::cout << "First name: " << std::endl;
	std::getline(std::cin, this->_first_name);
}