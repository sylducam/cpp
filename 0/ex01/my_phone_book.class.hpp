#ifndef MY_PHONE_BOOK_CLASS_HPP
# define MY_PHONE_BOOK_CLASS_HPP
#include <string>
#include <istream>
#include <iostream>

// penser a mettre en const ce qui doit l'etre
// qu'est-ce que je mets en public / private ? regardes de nouveau la video sur
// private
// fous des const auntant que possible

class phone_book
{
	public:

		phone_book(void); // ne sera pas void
		~phone_book(void); // ne sera pas void

	private :

		int	nb_of_contacts;
// tout ce qui suit doit faire partie de l'autre classe, la classe contacts
// dans la classe phone_book tu peux mettre le nombre de contacts qu'il y a
// et ca doit s'arreter a huit
		std::string _first_name;
		std::string	_last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

		static	bool	phone_book_instance = false;
};

// class contacts // in another .hpp

#endif