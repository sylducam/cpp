
#include "contact.class.hpp"

contact::contact(void)
{
	return;
}

contact::~contact(void)
{
	return;
}

std::string contact::get_first_name() const
{
	return(this->_first_name);
}
std::string contact::get_last_name() const
{
	return(this->_last_name);
}
std::string contact::get_nickname() const
{
	return(this->_nickname);
}

void	contact::set_contact()
{
	std::cout << "Please fill your new contact's details" << std::endl;
	std::cout << "First name: " << std::endl;
	std::getline(std::cin, this->_first_name);
	std::cout << "Last name: " << std::endl;
	std::getline(std::cin, this->_last_name);
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, this->_nickname);
	std::cout << "Phone number: " << std::endl;
	std::getline(std::cin, this->_phone_number);
	std::cout << "Darkest secret: " << std::endl;
	std::getline(std::cin, this->_darkest_secret);
	std::cout << "Contact added ! " << std::endl;
}

void contact::print_contact() const
{
	std::cout << "Here are your contact's details: " << std::endl;
	std::cout << std::endl;
	std::cout << "First name : ";
	std::cout << this->_first_name << std::endl;
	std::cout << "Last name : ";
	std::cout << this->_last_name << std::endl;
	std::cout << "Nickname : ";
	std::cout << this->_nickname << std::endl;
	std::cout << "Phone_number : ";
	std::cout << this->_phone_number << std::endl;
	std::cout << "Darknest_secret : ";
	std::cout << this->_darkest_secret << std::endl;
	std::cout << std::endl;
}
