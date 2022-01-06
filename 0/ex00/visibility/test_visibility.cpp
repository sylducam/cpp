/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_visibility.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:45:00 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/06 21:45:14 by sylducam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void)
{
    std::cout << "Contructor called" << std::endl;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::bar(void)
{
    std::cout << "Member function bar called" << std::endl;
    return;
}
