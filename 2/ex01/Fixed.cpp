#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(): _raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Creates a new Fixed instance from an existing one
Fixed::Fixed(Fixed const &instance) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

// Converts int to fixed-point
// Moves 8 bits to left
Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw_bits = i << this->_fractional_bits;
}

// Converts float to fixed-point
// 1 << fractional_bits == 2^(fractional_bits)
Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw_bits = (int)roundf(f * (1 << this->_fractional_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Creates a new Fixed instance from an existing one when using =
Fixed &Fixed::operator=(Fixed const &instance)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_raw_bits = instance.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	return (this->_raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
}

// Converts fixed-point to float
// 1 << fractional_bits == 2^(fractional_bits)
float Fixed::toFloat(void) const
{
	return ((float)this->_raw_bits / (float)(1 << this->_fractional_bits));
}

// Converts fixed-point to int
// Moves 8 bits to the right
int Fixed::toInt(void) const
{
	return (this->_raw_bits >> this->_fractional_bits);
}

// Calls toFloat and returns it in the right format to be printed
std::ostream &operator<<(std::ostream &output_file, Fixed const &i)
{
	output_file << i.toFloat();
	return (output_file);
}
