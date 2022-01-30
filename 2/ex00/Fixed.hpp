#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &instance);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);
		Fixed &operator=(Fixed const &instance);

	private:
		static int const _fractional_bits;
		int _rawBits;

};

#endif
