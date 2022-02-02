#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# define MAX_MATERIA 4

class MateriaSource : public IMateriaSource
{
	private:

		AMateria* _materias[MAX_MATERIA];
	
		void initMateriaStorage();

	public:
		
		MateriaSource(void);
		MateriaSource(MateriaSource const& instance);
		MateriaSource& operator=(MateriaSource const& instance);
		~MateriaSource(void);

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const& type);
};

#endif
