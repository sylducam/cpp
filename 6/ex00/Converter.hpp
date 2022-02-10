#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <limits>


class Converter
{
	public:
		Converter();
		Converter(std::string raw);
		Converter(Converter const &instance);
		Converter &operator=(Converter const &instance);
		~Converter();
		const std::string getRaw() const;
		void print();
		
		class ConvertImpossible : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("impossible");
				}
		};		
		class NotDisplayable : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Not displayable");
				}
		};
	private:
		const std::string raw;
		int toInt();
		float toFloat();
		double toDouble();
		char toChar();
		bool isDigit();
		bool isChar();
		int charToDigit();
};

#endif
