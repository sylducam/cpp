/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:13:38 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/11 16:13:39 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &cpy);

		std::string getTarget() const;
		void setTarget(std::string target);

		void execute(Bureaucrat const &executor) const;
		static Form *newForm(std::string target);

		class FileErrorException : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return "Error with file.";
				}
		};

	private:
		ShrubberyCreationForm();

		std::string _target;
};

#endif