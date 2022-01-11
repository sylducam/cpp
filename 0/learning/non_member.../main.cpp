/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:22:03 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/09 12:57:15 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void	f0(void)
{
	Sample	instance;
	std::cout << "Number of instances : " << Sample::get_nb_inst() << std::endl;
	return;
	// ICI
}

int main()
{
	Sample  instance1(42);
	Sample  instance2(42);
 
	if (&instance1 == &instance1)
		std::cout << "instance1 and instance 1 are physically equal" << std::endl;
	else
		std::cout << "instance1 and instance 1 are not physically equal" << std::endl;
 
	if (&instance1 == &instance2)
		std::cout << "instance1 and instance 2 are physically equal" << std::endl;
	else
		std::cout << "instance1 and instance 2 are not physically equal" << std::endl;
 
	if (instance1.compare(&instance1) == 0)
		std::cout << "instance1 and instance 1 are structurally equal" << std::endl;
	else
		std::cout << "instance1 and instance 1 are not structurally equal" << std::endl;
 
	if (instance1.compare(&instance2) == 0)
		std::cout << "instance1 and instance 2 are structurally equal" << std::endl;
	else
		std::cout << "instance1 and instance 2 are not structurally equal" << std::endl;
 
	return 0;
}