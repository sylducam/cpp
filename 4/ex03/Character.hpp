#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Materia.hpp"
# include <iostream>

# define MAX_INV 4
# define DEBUG 0

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(Character const &instance);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		Character &operator=(Character const & instance);
	protected:
		std::string name;
		AMateria *inventory[MAX_INV];
		void initInventory();
};

#endif
