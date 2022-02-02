#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:

		std::string name;

	public:

		AAnimal(void);
		AAnimal(std::string name);
		AAnimal(AAnimal const& instance);
		AAnimal& operator=(AAnimal const& instance);
		virtual ~AAnimal(void) = 0;

		void virtual	makeSound(void) const;
		std::string		getType(void) const;
};

#endif