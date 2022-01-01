/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_main.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:22:03 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/01 15:22:11 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int main()
{
    Sample  instance;
    instance.foo = 42;
    std::cout << "instance.foo: " << instance.foo << std::endl;

    instance.bar();

    return 0;
}