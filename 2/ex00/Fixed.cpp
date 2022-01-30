#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed():	_rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Create a new Fixed instance from an other
Fixed::Fixed(Fixed const &instance) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Create a new Fixed instance from an other, when using =
Fixed &Fixed::operator=(Fixed const &instance)
{
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = instance.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}
