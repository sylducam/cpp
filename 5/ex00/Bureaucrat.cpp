#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Boris"), _grade(150) {}

Bureaucrat::Bureaucrat(Bureaucrat const& instance) : _name(instance.getName()), _grade(instance.getGrade())
{
	*this = instance;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& instance)
{
	(void)instance;
	return *this;
}

Bureaucrat::~Bureaucrat(void) {}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade; 
}

void Bureaucrat::upGrade()
{
	if (this->_grade == HIGHEST_RANK)
		throw Bureaucrat::GradeTooHighException();
	--this->_grade;
	std::cout << this->_name << " was promoted to grade " << this->getGrade() << std::endl;
}

void Bureaucrat::downGrade()
{
	if (this->_grade == LOWEST_RANK)
		throw Bureaucrat::GradeTooLowException();
	++this->_grade;
	std::cout << this->_name << " was demoted to grade " << this->getGrade() << std::endl;
}

std::ostream& operator<<(std::ostream& outputFile, Bureaucrat const& instance)
{
	outputFile << instance.getName() << " is grade " << instance.getGrade();
	return outputFile;
}
