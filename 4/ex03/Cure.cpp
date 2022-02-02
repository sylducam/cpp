#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const& instance) : AMateria("cure")
{
	*this = instance;
}

Cure& Cure::operator=(Cure const& instance)
{
	(void)instance;
	return (*this);
}

Cure::~Cure(void)
{
}

Cure* Cure::clone(void) const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl; 
}
