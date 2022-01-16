/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:22:03 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/09 12:57:15 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main()
{
    Sample  instance;
    instance.set_foo(42);
    std::cout << "instance.get_foo(): " << instance.get_foo() << std::endl;
    instance.set_foo(-42);
    std::cout << "instance.get_foo(): " << instance.get_foo() << std::endl;
    return 0;
}