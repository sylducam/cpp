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
}

void	f1()
{
	Sample  instance;
 
	std::cout << "Number of instances : " << Sample::get_nb_inst() << std::endl;
	f0();
	return;
}

int main()
{
	std::cout << "Number of instances : " << Sample::get_nb_inst() << std::endl;
	f1();
	std::cout << "Number of instances : " << Sample::get_nb_inst() << std::endl;
	return 0;
}