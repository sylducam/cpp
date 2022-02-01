#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include "Character.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(std::string name);
		AMateria(AMateria const &instance);
		virtual	~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string name;
};
 
class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &instance);
		Ice &operator=(Ice const &instance);
		virtual	~Ice();

		Ice* clone() const;
		void use(ICharacter& target);
};

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &instance);
		Cure &operator=(Cure const &instance);
		~Cure();

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
