#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "Character.hpp"


class ICharacter;

class AMateria
{
	protected:

		std::string name;

	public:

		AMateria(void);
		AMateria(std::string name);
		AMateria(AMateria const& instance);
		virtual	~AMateria(void);
		std::string const& getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif
