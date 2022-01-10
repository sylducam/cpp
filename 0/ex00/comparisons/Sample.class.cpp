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

Sample::Sample(int v) : _foo(v)
{
    std::cout << "Contructor called" << std::endl;
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

int    Sample::compare(Sample * other) const
{
    if (this->_foo < other->get_foo())
        return -1;
    else if (this->_foo > other->get_foo())
        return 1;
    return 0;
}
