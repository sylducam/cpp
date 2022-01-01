/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_tests.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:53:37 by sylducam          #+#    #+#             */
/*   Updated: 2021/12/30 18:56:34 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void)
{
    std::cout << "Contructor called" << std::endl;

    this->foo = 42; // this pointe sur l'instance courante
    std::cout << "this->foo: " << this->foo << std::endl;

    this->bar();

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