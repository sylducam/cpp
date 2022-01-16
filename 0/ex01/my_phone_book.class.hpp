#ifndef MY_PHONE_BOOK_CLASS_HPP
# define MY_PHONE_BOOK_CLASS_HPP
#include <string>
#include <istream>
#include <iostream>

// penser a mettre en const ce qui doit l'etre
// qu'est-ce que je mets en public / private ?

class phonebook
{
	public:

		start(void); // ne sera pas void
		~start(void); // ne sera pas void

	private :

		std::string _first_name;
		std::string	_last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

class contacts // in another .hpp

#endif