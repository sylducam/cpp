#include "AForm.hpp"

AForm::AForm() : name("nameless"), isSigne(false), requireLvlToSigned(LOWEST_RANK), requireLvlToExecute(LOWEST_RANK)  {}

AForm::AForm(std::string name, std::string target, int requireLvlToSigned, int requireLvlToExecute) : name(name),
	target(target), isSigne(false), requireLvlToSigned(requireLvlToSigned), requireLvlToExecute(requireLvlToExecute)
{
	if (this->requireLvlToSigned < HIGHEST_RANK || this->requireLvlToExecute < HIGHEST_RANK)
		throw AForm::GradeTooHighException();
	if (this->requireLvlToSigned > LOWEST_RANK || this->requireLvlToExecute > LOWEST_RANK)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &instance) : name(instance.getName()), target(instance.getTarget()), requireLvlToSigned(instance.getRequireLvlToSigned()), requireLvlToExecute(instance.getRequireLvlToExecute())
{
	if (this->requireLvlToSigned < HIGHEST_RANK || this->requireLvlToExecute < HIGHEST_RANK)
		throw AForm::GradeTooHighException();
	if (this->requireLvlToSigned > LOWEST_RANK || this->requireLvlToExecute > LOWEST_RANK)
		throw AForm::GradeTooLowException();
	this->isSigne = instance.isSigned();
	*this = instance;
}

AForm &AForm::operator=(AForm const &instance)
{
	(void)instance;
	return *this;
}

AForm::~AForm() {}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (this->isSigned())
		throw AForm::FormAlreadySigned();
	if (this->requireLvlToSigned < bureaucrat.getGrade())
		throw AForm::GradeTooLowException();
	this->isSigne = true;
}

void AForm::canExecute(Bureaucrat const &bureaucrat) const
{
	if (!this->isSigned())
		throw AForm::NoSignatureException();
	if (this->requireLvlToExecute < bureaucrat.getGrade())
		throw AForm::GradeTooLowException();
}

void AForm::canSigne(Bureaucrat const &bureaucrat) const
{
	if (this->requireLvlToSigned < bureaucrat.getGrade())
		throw AForm::GradeTooLowException();
}

std::string AForm::getName() const
{
	return this->name;
}

std::string AForm::getTarget() const
{
	return this->target;
}

int AForm::getRequireLvlToExecute() const
{
	return this->requireLvlToExecute;
}

int AForm::getRequireLvlToSigned() const
{
	return this->requireLvlToSigned;
}

bool AForm::isSigned() const
{
	return this->isSigne;
}

std::ostream &operator<<(std::ostream &outputFile, AForm const &instance)
{
	outputFile << "Form " << instance.getName() << " is ";
	if (!instance.isSigned())
		outputFile << "not ";
	outputFile	<< "signed. Minimum lvl to signed : " << instance.getRequireLvlToSigned()
				<< " & minimum lvl to execute : " << instance.getRequireLvlToExecute() << ".";
	return outputFile;
}
