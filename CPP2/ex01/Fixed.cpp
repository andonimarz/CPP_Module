#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed( const int n )
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_bits;
}

Fixed::Fixed( const float n )
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = std::roundf( n * (1 << this->_bits ));
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
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

int	Fixed::toInt( void ) const
{
	return (this->_value >> this->_bits);
}

float	Fixed::toFloat( void ) const 
{
	return (static_cast<float>(this->getRawBits() ) / ( 1 << this->_bits));
}

std::ostream	&operator<<( std::ostream &ost, Fixed const &instance)
{
	ost << instance.toFloat();
	return (ost);
}
