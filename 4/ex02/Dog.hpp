#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:

		Brain* _brain;

	public:

		Dog(void);
		Dog(Dog const& instance);
		Dog& operator=(Dog const& instance);
		~Dog(void);

		void virtual	makeSound(void) const;
		Brain*			getBrain(void) const;
};

#endif