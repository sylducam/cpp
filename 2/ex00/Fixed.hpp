#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:

		static int const	_fractional_bits;
		int					_raw_bits;
	
	public:

		Fixed(void);
		Fixed(Fixed const& instance);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed&	operator=(Fixed const& instance);
};

#endif
