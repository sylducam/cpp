#include "AMateria.hpp"

AMateria::AMateria(void) : name("empty")
{
}

AMateria::AMateria(AMateria const& instance)
{
	*this = instance;
}

AMateria::AMateria(std::string name) : name(name)
{
}

AMateria::~AMateria(void)
{
}

std::string const& AMateria::getType() const
{
	return (this->name);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "An error occurred with AMateria::use()." << std::endl;
}