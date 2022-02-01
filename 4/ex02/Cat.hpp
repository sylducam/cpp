#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:

		Brain* _brain;

	public:

		Cat(void);
		Cat(Cat const& instance);
		Cat& operator=(Cat const& instance);
		~Cat(void);

		void virtual	makeSound(void) const;
		Brain*			getBrain(void) const;
};

#endif