/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:54:47 by sylducam          #+#    #+#             */
/*   Updated: 2021/12/30 18:56:19 by sylducam         ###   ########.fr       */
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

};

#endif