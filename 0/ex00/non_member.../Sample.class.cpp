/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:19:02 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/09 13:22:10 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Contructor called" << std::endl;
	Sample::_nb_inst += 1;
	return;
}


Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
	Sample::_nb_inst -= 1;
    return;
}

int    Sample::get_nb_inst(void)
{
    return Sample::_nb_inst;
}

int    Sample::_nb_inst = 0;
