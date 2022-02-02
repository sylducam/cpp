/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:11:17 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/12 13:11:16 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat bob("Bob", 20);
	ShrubberyCreationForm shrub("Shrub");
	PresidentialPardonForm obama("Obama");
	RobotomyRequestForm bender("Bender");

	bob.signForm(shrub);
	bob.signForm(obama);
	bob.signForm(bender);

	bob.executeForm(shrub);

	try {
		shrub.execute(bob);
		obama.execute(bob);
		bender.execute(bob);

	} catch (std::exception &e) {
		std::cout << "You can't execute this form because : " << e.what() << std::endl;
	}
}