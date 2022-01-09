/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:48:30 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/09 12:59:22 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_HPP
# define SAMPLE1_CLASS_HPP

struct Sample1
{
    int foo;

    Sample1(void); // contructeur = nom de la classe
    ~Sample1(void); // destructeur = ~nom de la classe

    void    bar(void) const; // premier parametre est tj un pointeur
                                       // sur l'instance courante. meme s'il
                                       // n'est pas visible
};

#endif
