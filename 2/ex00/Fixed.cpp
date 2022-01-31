#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed():	_raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& instance) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &instance)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_raw_bits = instance.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw_bits = raw;
}
