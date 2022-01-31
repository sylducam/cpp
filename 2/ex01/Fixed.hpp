#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:

		static int const	_fractional_bits;
		int					_raw_bits;

	public:

		Fixed();
		Fixed(const float f);
		Fixed(const int i);
		Fixed(Fixed const& instance);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		Fixed&	operator=(Fixed const& instance);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream& outputFile, Fixed const& i);

#endif
