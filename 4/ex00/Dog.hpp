#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:

		Dog(void);
		Dog(Dog const& instance);
		Dog& operator=(Dog const& instance);
		~Dog(void);

		void virtual makeSound(void) const;
};

#endif