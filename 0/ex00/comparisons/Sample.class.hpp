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

struct Sample
{
    public:

        Sample(int v); // contructeur = nom de la classe
        ~Sample(void); // destructeur = ~nom de la classe

        int get_foo(void) const;
        int	compare(Sample * other) const;

    private:

        int _foo;
};

#endif
