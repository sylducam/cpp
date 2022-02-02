#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Boris"), _grade(150)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy.getName()), _grade(cpy.getGrade()) 
{
	*this = cpy;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &cpy)
{
	this->_grade = cpy.getGrade();

	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::setGrade(int value)
{
	if (value < 1)
		throw GradeTooHighException();
	if (value > 150)
		throw GradeTooLowException();
	this->_grade = value;
}

void Bureaucrat::increment()
{
	this->setGrade(this->getGrade() - 1 );
}

void Bureaucrat::decrement()
{
	this->setGrade(this->getGrade() + 1 );
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat)
{
	out << "<" + Bureaucrat.getName() + ">" << " bureaucrat grade <" << Bureaucrat.getGrade() << ">";
	return out;
}