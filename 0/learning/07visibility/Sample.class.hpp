/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:54:47 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/08 21:42:06 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP
# include <iostream>

class Sample
{
    public:

        int public_foo;

        Sample(void); // contructeur = nom de la classe
        ~Sample(void); // destructeur = ~nom de la classe

        void    public_bar(void) const; // premier parametre est tj un pointeur
                                       // sur l'instance courante. meme s'il
                                       // n'est pas visible
    private:

        int     _private_foo;

        void    _private_bar(void) const;
};

#endif