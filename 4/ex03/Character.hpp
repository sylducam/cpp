#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

# define MAX_INV 4
# define DELETE_SAFE_BUFFER 1

class AMateria;

class Character : public ICharacter
{
	protected:

		std::string		name;
		AMateria*		inventory[MAX_INV];
		AMateria*		toDelete[DELETE_SAFE_BUFFER];
		
		void initInventory(void);

	public:

		Character(void);
		Character(std::string name);
		Character(Character const& instance);
		~Character(void);
		std::string const& getName(void) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		Character& operator=(Character const&  instance);
		void unEquipSafe(int idx);
};

#endif
