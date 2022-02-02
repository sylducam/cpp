/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:11:25 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/11 16:11:26 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &cpy);

		std::string getTarget() const;
		void setTarget(std::string target);

		void execute(Bureaucrat const &executor) const;

		class FileErrorException : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return "Error with file.";
				}
		};

	private:
		PresidentialPardonForm();

		std::string _target;
};

#endif