#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string name);
		Animal(Animal const& instance);
		Animal &operator=(Animal const &instance);
		virtual ~Animal();

		void virtual makeSound() const;
		std::string getType() const;
	protected:
		std::string name;
};

#endif