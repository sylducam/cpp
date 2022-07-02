#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

static void defaultTest(Bureaucrat *bureaucrat, AForm *form)
{
	std::cout << *form << std::endl;
	try
	{
		bureaucrat->signForm(*form);
		bureaucrat->execute(*form);
	} catch (std::exception &e) {
		std::cout << "Unable to execute form : " << e.what() << std::endl;
	}
	delete form;
}

static void executeWithoutSigned(Bureaucrat *bureaucrat, AForm *form)
{
	std::cout << *form << std::endl;
	try
	{
		bureaucrat->execute(*form);
	} catch (std::exception &e) {
		std::cout << "Unable to execute form : " << e.what() << std::endl;
	}
	delete form;
}

static void testAllForms(Bureaucrat *bureaucrat, void (*f)(Bureaucrat *, AForm *))
{
	AForm *form;

	form = new RobotomyRequestForm("Elon");
	f(bureaucrat, form);
	std::cout << std::endl;

	form = new ShrubberyCreationForm("Foo");
	f(bureaucrat, form);
	std::cout << std::endl;

	form = new PresidentialPardonForm("Bar");
	f(bureaucrat, form);

	delete bureaucrat;
}


int main()
{
	Bureaucrat *bureaucrat;

	bureaucrat = new Bureaucrat("Jacky", 1);
	testAllForms(bureaucrat, defaultTest);
	std::cout << std::endl << std::endl;

	bureaucrat = new Bureaucrat("Jason", 1);
	testAllForms(bureaucrat, executeWithoutSigned);
	std::cout << std::endl << std::endl;

	bureaucrat = new Bureaucrat("Joe", 150);
	testAllForms(bureaucrat, defaultTest);

	return 0;
}
