/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:13:04 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/11 16:13:05 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) 
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExec())
{
	this->_target = cpy.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &cpy)
{
	this->_target = cpy.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

void PresidentialPardonForm::setTarget(std::string target)
{
	this->_target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);

	std::cout << executor.getName() + " is pardoned." << std::endl;
}

Form *PresidentialPardonForm::newForm(std::string target)
{
	return new PresidentialPardonForm(target);
}