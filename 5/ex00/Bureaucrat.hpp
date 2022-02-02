#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

# define HIGHEST_RANK 1
# define LOWEST_RANK 150

class Bureaucrat
{
	private:
	
		std::string const _name;
		int 		_grade;
	
	public:
	
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& instance);
		Bureaucrat& operator=(Bureaucrat const& instance);
		~Bureaucrat(void);
		std::string getName(void) const;
		int getGrade(void) const;
		void upGrade(void);
		void downGrade(void);

		class GradeTooHighException : public std::exception
		{
			public:

				virtual const char* what() const throw()
				{
					return ("Exception > Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:

				virtual const char* what() const throw()
				{
					return ("Exception > Grade too low");
				}
		};
};

std::ostream& operator<<(std::ostream& outputFile, Bureaucrat const& instance);

#endif
