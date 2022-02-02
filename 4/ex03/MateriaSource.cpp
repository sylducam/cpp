#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->initMateriaStorage();
}

MateriaSource::MateriaSource(MateriaSource const& instance)
{
	this->initMateriaStorage();
	*this = instance;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& instance)
{
	for (int i = 0; i < MAX_MATERIA; ++i)
	{
		if (instance._materias[i])
			this->_materias[i] = instance._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < MAX_MATERIA; ++i)
	{
		if (this->_materias[i])
		{
			if (DEBUG)
				std::cout << "[DEBUG] Materia " << this->_materias[i]->getType() << " unregistered and destroyed from MateriaSource." << std::endl;
			delete this->_materias[i];
		}
	}
}

void MateriaSource::initMateriaStorage(void)
{
	for (int i = 0; i < MAX_MATERIA; ++i)
		this->_materias[i] = NULL;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < MAX_MATERIA; ++i)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = materia;
			if (DEBUG)
			{
				std::cout << "[DEBUG] Materia " << materia->getType() << " is register." << std::endl;
			}
			return;
		}
		else if (this->_materias[i] == materia)
		{
			std::cout << "This instance of materia " << materia->getType() << " is already learned." << std::endl;
			return;
		}
		else if (this->_materias[i]->getType() == materia->getType())
		{
			std::cout << "Materia " << materia->getType() << " is already learned. You have to free it to avoid memory leaks." << std::endl;
			return;
		}
	}
	std::cout << "The space limit of " << MAX_MATERIA << " for MateriaSource has been reached. ";
	std::cout << materia->getType() << " couldn't be added." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	AMateria *materia;
	for (int i = 0; i < MAX_MATERIA; ++i)
	{
		materia = this->_materias[i];
		if (materia && materia->getType() == type)
			return (materia->clone());
	}
	std::cout << "Materia " << type << " unknown." << std::endl;
	return (NULL);
}
