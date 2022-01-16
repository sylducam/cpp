/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:18:40 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/09 13:23:35 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample
{
    public:

        int foo;
        Sample(void); // contructeur = nom de la classe
        ~Sample(void); // destructeur = ~nom de la classe
        void    bar(void) const;
};

#endif
