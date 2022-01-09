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
    this->foo = 0;
    std::cout << "this->foo: " << this->foo << std::endl;
    this->bar();
    return;
}


Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::bar(void) const
{
    std::cout << "Member function bar called" << std::endl;
    return;
}
