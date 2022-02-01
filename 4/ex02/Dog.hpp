#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const& instance);
		Dog &operator=(Dog const &instance);
		~Dog();

		void virtual makeSound() const;
		Brain *getBrain() const;
	private:
		Brain* brain;
};

#endif