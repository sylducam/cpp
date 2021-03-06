#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("nameless"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name) : name(name), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (this->grade < HIGHEST_RANK)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > LOWEST_RANK)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &instance) : name(instance.getName()), grade(instance.getGrade())
{
	if (this->grade < HIGHEST_RANK)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > LOWEST_RANK)
		throw Bureaucrat::GradeTooLowException();
	*this = instance;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &instance)
{
	(void)instance;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade; 
}

void Bureaucrat::upGrade()
{
	if (this->grade == HIGHEST_RANK)
		throw Bureaucrat::GradeTooHighException();
	--this->grade;
	std::cout << this->name << " was promote lvl " << this->getGrade() << std::endl;
}

void Bureaucrat::downGrade()
{
	if (this->grade == LOWEST_RANK)
		throw Bureaucrat::GradeTooLowException();
	++this->grade;
	std::cout << this->name << " was demote lvl " << this->getGrade() << std::endl;
}

void Bureaucrat::signForm(Form &form)
{
	try {
		form.beSigned(*this);
		std::cout << this->name << " signs form " << form.getName() << "." << std::endl;
	} catch (Form::FormAlreadySigned &e) {
		std::cout << this->name << " cannot sign form " << form.getName() << " because the form is already signed." << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << this->name << " cannot sign form " << form.getName() << " because his grade is too low." << std::endl;
	}
}

std::ostream &operator<<(std::ostream &outputFile, Bureaucrat const &instance)
{
	outputFile << instance.getName() << " is lvl " << instance.getGrade() << ".";
	return outputFile;
}
