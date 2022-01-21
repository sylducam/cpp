#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <string> // needed here ?
#include <istream> // needed here ?
#include <iostream> // needed here ?
#include <iomanip> // needed here ?

// penser a mettre en const ce qui doit l'etre
// qu'est-ce que je mets en public / private ? regardes de nouveau la video sur
// private
// fous des const auntant que possible

class contact
{
	public:

		contact(void); // ne sera pas void ?
		~contact(void); // ne sera pas void ?
		void	set_contact();
		
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