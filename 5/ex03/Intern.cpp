#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &instance)
{
	*this = instance;
}

Intern &Intern::operator=(Intern const &instance)
{
	(void)instance;
	return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(std::string formName, std::string target) const
{
	int index = -1;
	std::string formNames[] = {"presidential pardon", "robotomy request", "shruberry creation"};
	int formSize = sizeof(formNames) / sizeof(formNames[0]);

	for (int i = 0; i < formSize; ++i)
	{
		if (formNames[i] == formName)
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
		case 0:
		{
			std::cout << "Intern creates PresidentialPardonForm" << std::endl;
			return new PresidentialPardonForm(target);
		}
		case 1:
		{
			std::cout << "Intern creates RobotomyRequestForm" << std::endl;
			return new RobotomyRequestForm(target);
		}
		case 2:
		{
			std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
			return new ShrubberyCreationForm(target);
		}
		default:
			throw Intern::UnknownForm();
	}
}
