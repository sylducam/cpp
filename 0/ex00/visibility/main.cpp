/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:22:03 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/09 11:31:08 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main()
{
    Sample  instance;
    instance.public_foo = 42;
    std::cout << "instance.public_foo: " << instance.public_foo << std::endl;
    // instance._private_foo = 42;
    // std::cout << "instance._private_foo: " << instance._private_foo << std::endl;

    instance.public_bar();
    // instance._private_bar();
    return 0;
}