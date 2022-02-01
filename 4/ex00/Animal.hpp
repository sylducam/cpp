#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:

		std::string name;

	public:

		Animal(void);
		Animal(std::string name);
		Animal(Animal const& instance);
		Animal& operator=(Animal const& instance);
		virtual ~Animal(void);

		void virtual	makeSound(void) const;
		std::string		getType(void) const;
};

#endif