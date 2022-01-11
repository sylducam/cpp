/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:02:11 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/05 16:20:13 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP
# include <iostream>

class Sample
{
    public:

        float const pi;
        int         qd;

        Sample(float const f);
        ~Sample(void);

        void    bar(void) const; // signifie que cette fonction membre ne
                                 // modifiera jamais l'instance courante (pareil
                                 // avec le const avant { dans Sample.class.cpp)
                                 // BIEN les placer dans le proto et a la
                                 // definition (dans le .cpp)
};

#endif
