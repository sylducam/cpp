#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "Character.hpp"

class ICharacter;

class Cure : public AMateria
{
	public:

		Cure(void);
		Cure(Cure const& instance);
		Cure& operator=(Cure const& instance);
		~Cure(void);

		Cure* clone(void) const;
		void use(ICharacter& target);
};

#endif
