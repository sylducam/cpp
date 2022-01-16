/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:18:40 by sylducam          #+#    #+#             */
/*   Updated: 2022/01/16 13:22:01 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

struct Sample
{
    public:

        Sample(void);
        ~Sample(void);

        static int	get_nb_inst(void);

    private:

        static int _nb_inst;
};

#endif
