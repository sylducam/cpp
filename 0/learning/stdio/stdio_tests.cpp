/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_tests.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 19:59:56 by sylducam          #+#    #+#             */
/*   Updated: 2021/12/30 18:48:52 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buff[512];

	std::cout << "Hello World !" << std::endl;
	
	std::cout << "Type a word: ";
	std::cin >> buff;
	std::cout << "You typed: [" << buff << "]" << std::endl;

	return(0);
}