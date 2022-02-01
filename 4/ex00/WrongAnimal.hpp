#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:

		std::string name;
	
	public:

		WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal const& instance);
		WrongAnimal& operator=(WrongAnimal const& instance);
		~WrongAnimal(void);

		void makeSound(void) const;
		std::string getType(void) const;
};

#endif