#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <string>
#include <iostream>
#include <iomanip>

class contact
{
	public:

		contact(void);
		~contact(void);
		void	set_contact();
		void	print_contact() const;;
		
		std::string get_first_name() const; 
		std::string get_last_name() const;
		std::string get_nickname() const;

	private :

		std::string _first_name;
		std::string	_last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif