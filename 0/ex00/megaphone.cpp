/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:18:37 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/13 11:18:40 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			argv[i][j] = toupper((unsigned char)argv[i][j]);
			j++;
		}
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		megaphone(argv);
	return (0);
}

// #include <string>
// #include <locale>

// std::string str = "Hello World!";
// auto & f = std::use_facet<std::ctype<char>>(std::locale());
// f.toupper(str.data(), str.data() + str.size());

// std::use_facet<std::ctype<char> > & f = 
//     std::use_facet<std::ctype<char> >(std::locale());
// f.toupper(const_cast<char *>(str.data()), str.data() + str.size());