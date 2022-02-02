#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *bureaucrat = new Bureaucrat("Boris");

	std::cout << *bureaucrat << std::endl;
	try
	{
		bureaucrat->downGrade();
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << *bureaucrat << std::endl;
	try
	{
		while (true)
		{
			bureaucrat->upGrade();
		}
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << *bureaucrat << std::endl;
	try
	{
		while (true)
		{
			bureaucrat->downGrade();
		}
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << *bureaucrat << std::endl;
	delete bureaucrat;
	return 0;
}
