/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:12:38 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/11 16:12:39 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &cpy);
		~Intern();

		Intern &operator=(const Intern &cpy);
		Form *makeForm(std::string form, std::string target);

		class FormNotFoundException : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return "Form not found !";
				}
		};

	private:
		std::string _forms[3];
		Form *(*_formsConstructor[3])(std::string target);
};

#endif