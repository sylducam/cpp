/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:13:22 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/11 16:13:23 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) 
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExec())
{
	this->_target = cpy.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &cpy)
{
	this->_target = cpy.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

void RobotomyRequestForm::setTarget(std::string target)
{
	this->_target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	srand (time(NULL));
	if (rand() % 2)
	{
		std::cout << "Bzzzzbzzbzbzbzbz .." << std::endl;
		std::cout << executor.getName() + " has been robomized \\/" << std::endl;
	}
	else
		std::cout << "Robimization failed :(" << std::endl;
}

Form *RobotomyRequestForm::newForm(std::string target)
{
	return new RobotomyRequestForm(target);
}