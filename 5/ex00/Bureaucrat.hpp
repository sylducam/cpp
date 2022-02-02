#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &cpy);
		virtual ~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &cpy);

		std::string getName() const;
		int	getGrade() const;
		void setGrade(int value);
		void increment();
		void decrement();

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return "Grade too high.";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return "Grade too low.";
				}
		};

	private:
		std::string const _name;
		int	_grade;

};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);

#endif