/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:13:26 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/11 16:13:27 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &cpy);

		std::string getTarget() const;
		void setTarget(std::string target);

		void execute(Bureaucrat const &executor) const;
		static Form *newForm(std::string target);

	private:
		RobotomyRequestForm();

		std::string _target;
};

#endif