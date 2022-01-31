#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(): _raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed::Fixed(const int i): _raw_bits(i << this->_fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f): _raw_bits((int)roundf(f * (1 << this->_fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const& instance)
{
	this->_raw_bits = instance.getRawBits();
	return (*this);
}

// Addition
Fixed Fixed::operator+(Fixed const& instance)
{
	return (this->toFloat() + instance.toFloat());
}

// Substraction
Fixed Fixed::operator-(Fixed const& instance)
{
	return (this->toFloat() - instance.toFloat());
}

// Multiplication
Fixed Fixed::operator*(Fixed const& instance)
{
	return (this->toFloat() * instance.toFloat());
}

// Division
Fixed Fixed::operator/(Fixed const& instance)
{
	return (this->toFloat() / instance.toFloat());
}

bool Fixed::operator>(Fixed const& instance) const
{
	return (this->getRawBits() > instance.getRawBits());
}

bool Fixed::operator>=(Fixed const& instance) const
{
	return (this->getRawBits() >= instance.getRawBits());
}

bool Fixed::operator<(Fixed const& instance) const
{
	return (this->getRawBits() < instance.getRawBits());
}

bool Fixed::operator<=(Fixed const& instance) const
{
	return (this->getRawBits() <= instance.getRawBits());
}

bool Fixed::operator==(Fixed const& instance) const
{
	return (this->getRawBits() == instance.getRawBits());
}

bool Fixed::operator!=(Fixed const& instance) const
{
	return (this->getRawBits() != instance.getRawBits());
}

// Pre-Incrementation
Fixed& Fixed::operator++(void)
{
	this->_raw_bits++;
	return (*this);
}

// Pre-Decrementation
Fixed& Fixed::operator--(void)
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

// Returns the lowest
Fixed const& Fixed::min(Fixed const& value1, Fixed const& value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

// Returns the highest
Fixed const& Fixed::max(Fixed const& value1, Fixed const& value2)
{
	if (value1 > value2)
		return (value1);
	return (value2);
}

// Converts fixed-point to float
// 1 << fractional_bits == 2^(fractional_bits)
float Fixed::toFloat(void) const
{
	return ((float)this->_raw_bits / (float)(1 << this->_fractional_bits));
}

// Converts fixed-point to int
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

// Calls toFloat and returns it in the right format to be printed
std::ostream& operator<<(std::ostream& output_file, Fixed const& i)
{
	output_file << i.toFloat();
	return (output_file);
}
