/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:09:28 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/09 13:10:20 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(void)
{
    std::cout << "Contructor called" << std::endl;
    this->foo = 0;
    std::cout << "this->foo: " << this->foo << std::endl;
    this->bar();
    return;
}


Sample2::~Sample2(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample2::bar(void) const
{
    std::cout << "Member function bar called" << std::endl;
    return;
}
