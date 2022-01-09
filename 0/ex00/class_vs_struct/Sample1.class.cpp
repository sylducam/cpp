/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:04:53 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/09 13:09:08 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(void)
{
    std::cout << "Contructor called" << std::endl;
    this->foo = 0;
    std::cout << "this->foo: " << this->foo << std::endl;
    this->bar();
    return;
}


Sample1::~Sample1(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample1::bar(void) const
{
    std::cout << "Member function bar called" << std::endl;
    return;
}
