#include "Intern.hpp"

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
	form = NULL;
}

static void testBureaucrat(Bureaucrat *bureaucrat, void (*f)(Bureaucrat *, AForm *))
{
	AForm *form;
	Intern intern;

	try
	{
		form = intern.makeForm("presidential pardon", "Elon");
		f(bureaucrat, form);
	} catch (Intern::UnknownForm &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		form = intern.makeForm("robotomy request", "Foo");
		f(bureaucrat, form);
	} catch (Intern::UnknownForm &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		form = intern.makeForm("shruberry creation", "Bar");
		f(bureaucrat, form);
	} catch (Intern::UnknownForm &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		form = intern.makeForm("??????????????????", "Opsilon");
		f(bureaucrat, form);
	} catch (Intern::UnknownForm &e) {
		std::cout << e.what() << std::endl;
	}

	delete bureaucrat;
}

int main()
{
	Bureaucrat *bureaucrat;

	bureaucrat = new Bureaucrat("Jacky", 1);
	testBureaucrat(bureaucrat, defaultTest);
	std::cout << std::endl << std::endl;

	bureaucrat = new Bureaucrat("Joe", 150);
	testBureaucrat(bureaucrat, defaultTest);

	return 0;
}
