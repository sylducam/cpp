/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:52:05 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/09 12:59:20 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_HPP
# define SAMPLE2_CLASS_HPP

class Sample2
{
   int foo;

   Sample2(void); // contructeur = nom de la classe
   ~Sample2(void); // destructeur = ~nom de la classe

    void    bar(void) const; // premier parametre est tj un pointeur
                                       // sur l'instance courante. meme s'il
                                       // n'est pas visible
};

#endif
