#include "MateriaSource.hpp"

void mandatoryTest(void)
{
	MateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void unequipTest(void)
{
	MateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* instanceIce;
	instanceIce = src->createMateria("ice");
	me->equip(instanceIce);

	AMateria* instanceCure;
	instanceCure = src->createMateria("cure");
	me->equip(instanceCure);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);
	delete instanceIce;

	me->unequip(1);
	delete instanceCure;

	delete bob;
	delete me;
	delete src;
}

void unequipCustomTest(void)
{
	MateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* instanceIce;
	instanceIce = src->createMateria("ice");
	me->equip(instanceIce);

	AMateria* instanceCure;
	instanceCure = src->createMateria("cure");
	me->equip(instanceCure);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	me->unEquipSafe(0);
	me->unEquipSafe(1);

	delete bob;
	delete me;
	delete src;
}

void notRegisteredTest(void)
{
	MateriaSource* src = new MateriaSource();

	ICharacter* me = new Character("me");

	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void equipSameInstanceTest(void)
{
	MateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void useOutOfRangeTest(void)
{
	MateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	ICharacter* bob = new Character("bob");

	me->use(-1, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(4, *bob);

	delete bob;
	delete me;
	delete src;
}

void learnSameClassTest(void)
{
	MateriaSource* src = new MateriaSource();

	src->learnMateria(new Cure());

	AMateria* tmp = new Cure();
	src->learnMateria(tmp);
	delete tmp;

	delete src;
}

int main(void)
{
	std::cout << "#####################{mandatoryTest}#####################" << std::endl;
	mandatoryTest();
	std::cout << "#####################{unequipTest}#####################" << std::endl;
	unequipTest();
	std::cout << "#####################{unequipCustomTest}#####################" << std::endl;
	unequipCustomTest();
	std::cout << std::endl << "#####################{notRegisteredTest}#####################" << std::endl;
	notRegisteredTest();
	std::cout << std::endl << "#####################{equipSameInstanceTest}#####################" << std::endl;
	equipSameInstanceTest();
	std::cout << std::endl << "#####################{useOutOfRangeTest}#####################" << std::endl;
	useOutOfRangeTest();
	std::cout << std::endl << "#####################{learnSameClassTest}#####################" << std::endl;
	learnSameClassTest();

	return (0);
}
