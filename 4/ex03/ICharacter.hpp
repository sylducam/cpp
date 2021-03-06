#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"
# include <iostream>

# define MAX_INV 4
# define DEBUG 0

class AMateria;

class ICharacter
{
	public:

		virtual ~ICharacter(void) {}
		virtual std::string const & getName(void) const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		virtual void unEquipSafe(int idx) = 0;
};

#endif
