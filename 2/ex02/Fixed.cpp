#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(): _raw_bits(0) {}

Fixed::Fixed(Fixed const &instance)
{
	*this = instance;
}

Fixed::Fixed(const int i): _raw_bits(i << this->_fractional_bits) {}

Fixed::Fixed(const float f): _raw_bits((int)roundf(f * (1 << this->_fractional_bits))) {}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(Fixed const &instance)
{
	this->_raw_bits = instance.getRawBits();
	return (*this);
}

// Add
Fixed Fixed::operator+(Fixed const &instance)
{
	return (this->toFloat() + instance.toFloat());
}

// Substract
Fixed Fixed::operator-(Fixed const &instance)
{
	return (this->toFloat() - instance.toFloat());
}

// Multiply
Fixed Fixed::operator*(Fixed const &instance)
{
	return (this->toFloat() * instance.toFloat());
}

// Divide
Fixed Fixed::operator/(Fixed const &instance)
{
	return (this->toFloat() / instance.toFloat());
}

bool Fixed::operator>(Fixed const &instance) const
{
	return (this->getRawBits() > instance.getRawBits());
}

bool Fixed::operator>=(Fixed const &instance) const
{
	return (this->getRawBits() >= instance.getRawBits());
}

bool Fixed::operator<(Fixed const &instance) const
{
	return (this->getRawBits() < instance.getRawBits());
}

bool Fixed::operator<=(Fixed const &instance) const
{
	return (this->getRawBits() <= instance.getRawBits());
}

bool Fixed::operator==(Fixed const &instance) const
{
	return (this->getRawBits() == instance.getRawBits());
}

bool Fixed::operator!=(Fixed const &instance) const
{
	return (this->getRawBits() != instance.getRawBits());
}

// Pre-Incrementation
Fixed &Fixed::operator++(void)
{
	this->_raw_bits++;
	return (*this);
}

// Pre-Decrementation
Fixed &Fixed::operator--(void)
{
	this->_raw_bits--;
	return (*this);
}

// Post-Incrementation
Fixed Fixed::operator++(int)
{
	Fixed result(*this);
	this->_raw_bits++;
	return (result);
}

// Post-Decrementation
Fixed Fixed::operator--(int)
{
	Fixed result(*this);
	this->_raw_bits--;
	return (result);
}

// Return the lowest
Fixed const &Fixed::min(Fixed const &value1, Fixed const &value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

// Return the greatest
Fixed const &Fixed::max(Fixed const &value1, Fixed const &value2)
{
	if (value1 > value2)
		return (value1);
	return (value2);
}

// Convert fixed-point to float
// 1 << fractional_bits == 2^(fractional_bits)
float Fixed::toFloat(void) const
{
	return ((float)this->_raw_bits / (float)(1 << this->_fractional_bits));
}

// Convert fixed-point to int
// Move 8 bits to right
int Fixed::toInt(void) const
{
	return (this->_raw_bits >> this->_fractional_bits);
}

int	Fixed::getRawBits() const
{
	return (this->_raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
}

// When print this class in std::cout, call toFloat and return it, in good format
std::ostream &operator<<(std::ostream &outputFile, Fixed const &i)
{
	outputFile << i.toFloat();
	return (outputFile);
}
