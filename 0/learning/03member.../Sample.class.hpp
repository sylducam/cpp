/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:54:47 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/16 15:32:43 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP
# include <iostream>

class Sample
{
    public:

        int foo;

        Sample(void); // contructeur = nom de la classe
        ~Sample(void); // destructeur = ~nom de la classe

        void    bar(void); // premier parametre est tj un pointeur sur
                           // l'instance courante. meme s'il n'est pas visible
	private :

		std::string _first_name;
		std::string	_last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif