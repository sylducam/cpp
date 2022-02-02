#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("nameless"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {}

Bureaucrat::Bureaucrat(Bureaucrat const& instance)
{
	*this = instance;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& instance)
{
	this->_name = instance.getName();
	this->_grade = instance.getGrade();
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
