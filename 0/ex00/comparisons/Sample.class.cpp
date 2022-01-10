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
    this->set_foo(0);
    std::cout << "this->get_foo(): " << this->get_foo() << std::endl;
    return;
}


Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int    Sample::get_foo(void) const
{
    return this->_foo;
}

void    Sample::set_foo(int v)
{
    if (v >= 0)
        this->_foo = v;
    return;
}
