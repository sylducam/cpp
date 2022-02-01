#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal const& instance);
		WrongAnimal &operator=(WrongAnimal const &instance);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
	protected:
		std::string name;
};

#endif