#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
	
		static int const _fractional_bits;
		int _raw_bits;

	public:

		static const Fixed& min(Fixed const& value1, Fixed const& value2);
		static const Fixed& max(Fixed const& value1, Fixed const& value2);
//ICI
		Fixed();
		Fixed(const float f);
		Fixed(const int i);
		Fixed(Fixed const &instance);
		~Fixed();

		Fixed &operator=(Fixed const &instance);
		Fixed operator+(Fixed const &instance);
		Fixed operator-(Fixed const &instance);
		Fixed operator*(Fixed const &instance);
		Fixed operator/(Fixed const &instance);


		bool operator>(Fixed const &instance) const;
		bool operator>=(Fixed const &instance) const;
		bool operator<(Fixed const &instance) const;
		bool operator<=(Fixed const &instance) const;
		bool operator==(Fixed const &instance) const;
		bool operator!=(Fixed const &instance) const;

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		float toFloat(void) const;
		int toInt(void) const;

		int getRawBits() const;
		void setRawBits(int const raw);};

std::ostream &operator<<(std::ostream &outputFile, Fixed const &i);

#endif
