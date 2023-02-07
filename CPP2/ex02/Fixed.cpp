/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:03:53 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/07 09:03:54 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

//Default constructor.
Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

//A constructor that takes a constant integer as a parameter and that converts it to
//the correspondant fixed(8) point value.
Fixed::Fixed( const int n )
{
	//std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_bits;
}

//A constructor that takes a constant floating point as a parameter and that converts
//it to the correspondant fixed(8) point value.
Fixed::Fixed( const float n )
{
	//std::cout << "Float constructor called" << std::endl;
	this->_value = std::roundf( n * ( 1 << this->_bits ));
}

//Destructor.
Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

//Copy constructor.
Fixed::Fixed( const Fixed &ref)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->operator=(ref);
}

//Assignation operator overload.
Fixed	&Fixed::operator=( const Fixed &ref )
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this != &ref)
		this->_value = ref.getRawBits();
	return (*this);
}

//A member function that returns the raw value of the fixed point value.
int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

//A member function void that sets the raw value of the fixed point value.
void Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

//A member function that converts the fixed point value to an integer value.
int	Fixed::toInt( void ) const
{
	return (this->_value >> this->_bits);
}

//A member function that converts the fixed point value to a floating point value.
float	Fixed::toFloat( void ) const 
{
	return (static_cast<float>(this->getRawBits() ) / ( 1 << this->_bits));
}

//Comparison operators: >, <, >=, <=, == and !=.

bool	Fixed::operator>( const Fixed &ref ) const
{
	return (this->getRawBits() > ref.getRawBits());
}

bool	Fixed::operator<( const Fixed &ref ) const
{
	return (this->getRawBits() < ref.getRawBits());
}

bool	Fixed::operator>=( const Fixed &ref ) const
{
	return (this->getRawBits() >= ref.getRawBits());
}

bool	Fixed::operator<=( const Fixed &ref ) const
{
	return (this->getRawBits() <= ref.getRawBits());
}

bool	Fixed::operator==( const Fixed &ref ) const
{
	return (this->getRawBits() == ref.getRawBits());
}

bool	Fixed::operator!=( const Fixed &ref ) const
{
	return (this->getRawBits() != ref.getRawBits());
}

//Arithmetic operators: +, -, *, and /.

Fixed	Fixed::operator+( const Fixed &ref ) const
{
	return Fixed( this->toFloat() + ref.toFloat() );
}

Fixed	Fixed::operator-( const Fixed &ref ) const
{
	return Fixed( this->toFloat() - ref.toFloat() );
}

Fixed	Fixed::operator*( const Fixed &ref ) const
{
	return Fixed( this->toFloat() * ref.toFloat() );
}

Fixed	Fixed::operator/( const Fixed &ref ) const
{
	return Fixed( this->toFloat() / ref.toFloat() );
}

//The pre-increment, post-increment, pre-decrement and post-decrement operators.

Fixed	&Fixed::operator++( void )
{
	this->_value += 1 << this->_bits;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp( *this );
	operator++();
	return (tmp);
}

Fixed	&Fixed::operator--( void )
{
	this->_value -= 1 << this->_bits;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp( *this );
	operator--();
	return (tmp);
}

//The static member function min that takes references on two fixed point values and
//returns a reference to the smallest value

Fixed	&Fixed::min( Fixed &a, Fixed &b )
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

//An overload that takes references on two constant fixed point values and returns a ]
//reference to the smallest constant value

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b )
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return b;
}

//The static member function max that takes references on two fixed point values
//and returns a reference to the biggest value

Fixed	&Fixed::max( Fixed &a, Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

//An overload that takes references on two constant fixed point values and returns 
//a reference to the biggest constant value.

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

//An overload to the « operator that inserts a floating point representation of the
//fixed point value into the parameter output stream
std::ostream	&operator<<( std::ostream &ost, Fixed const &instance)
{
	ost << instance.toFloat();
	return (ost);
}
