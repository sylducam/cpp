/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_visibility.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:45:00 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/08 21:42:16 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void)
{
    std::cout << "Contructor called" << std::endl;
    this->public_foo = 0;
    std::cout << "this->public_foo: " << this->public_foo << std::endl;
    this->_private_foo = 0;
    std::cout << "this->_private_foo: " << this->_private_foo << std::endl;
    this->public_bar();
    this->_private_bar();
    return;
}
// ICI
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
