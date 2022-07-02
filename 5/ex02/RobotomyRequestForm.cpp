#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", target, 72, 45)  {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->canExecute(executor);
	std::srand(time(0));
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized." << std::endl;
	else
		std::cout << "The robotization operation has failed on " <<  this->getTarget() << "." << std::endl;
}
