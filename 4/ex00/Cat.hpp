#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const& instance);
		Cat &operator=(Cat const &instance);
		~Cat();

		void virtual makeSound() const;
};

#endif