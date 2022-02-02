#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "Character.hpp"

class ICharacter;
 
class Ice : public AMateria
{
	public:

		Ice(void);
		Ice(Ice const& instance);
		Ice& operator=(Ice const& instance);
		~Ice(void);

		Ice* clone(void) const;
		void use(ICharacter& target);
};

#endif
