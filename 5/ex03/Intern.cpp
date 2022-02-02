/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:12:32 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/11 16:12:33 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	this->_forms[0] = "robotomy";
	this->_forms[1] = "shrubbery";
	this->_forms[2] = "presidential";

	this->_formsConstructor[0] = RobotomyRequestForm::newForm;
	this->_formsConstructor[1] = ShrubberyCreationForm::newForm;
	this->_formsConstructor[2] = PresidentialPardonForm::newForm;
}

Intern::Intern(Intern const &cpy)
{
	(void)cpy;
}

Intern::~Intern()
{}

Intern &Intern::operator=(const Intern &cpy)
{
	(void)cpy;
	return *this;
}

Form *Intern::makeForm(std::string form, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (this->_forms[i] == form)
		{
			std::cout << "Intern creates " + form << std::endl;
			return ((this->_formsConstructor[i])(target));
		}
	}
	throw FormNotFoundException();
	return NULL;
}