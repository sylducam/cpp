#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap foo("Foo");
	DiamondTrap nameless;
	DiamondTrap bar("Bar");
	DiamondTrap passive("Passive");

	std::cout << std::endl;

	while (foo.getEnergyPoints())
	{
		foo.attack("Bar");
		bar.takeDamage(foo.getAttackDamage());
	}
	std::cout << std::endl;

	foo.attack("Bar");
	std::cout << std::endl;

	nameless.attack("Bar");
	bar.takeDamage(nameless.getAttackDamage());
	std::cout << std::endl;

	bar.beRepaired(5);
	std::cout << std::endl;

	nameless.attack("Foo");
	foo.takeDamage(nameless.getAttackDamage());
	std::cout << std::endl;

	nameless.highFivesGuys();
	std::cout << std::endl;

	nameless.guardGate();
	std::cout << std::endl;

	nameless.whoAmI();
	std::cout << std::endl;

	foo.whoAmI();
	std::cout << std::endl;

	std::cout << foo << std::endl;
	std::cout << nameless << std::endl;
	std::cout << bar << std::endl;
	std::cout << passive << std::endl;
	std::cout << std::endl;
	return (0);
}
