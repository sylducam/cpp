#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name);
		Form(std::string name, int requireLvlToSigned, int requireLvlToExecute);
		Form(Form const &instance);
		Form &operator=(Form const &instance);
		~Form();

		std::string getName() const;
		bool isSigned() const;
		int getRequireLvlToSigned() const;
		int getRequireLvlToExecute() const;
		void beSigned(Bureaucrat &bureaucrat);

		class FormAlreadySigned : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[0;31mForm::FormAlreadySigned > The form is already signed\e[0m");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[0;31mForm::GradeTooLowException > Grade too low\e[0m");
				}
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[0;31mForm::GradeTooHighException > Grade too high\e[0m");
				}
		};
	private:
		const std::string name;
		bool isSigne;
		const int requireLvlToSigned;
		const int requireLvlToExecute;

};

std::ostream &operator<<(std::ostream &outputFile, Form const &instance);

#endif
