#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(ref);
}

Fixed	&Fixed::operator=( const Fixed &ref )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &ref)
		this->_value = ref.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
