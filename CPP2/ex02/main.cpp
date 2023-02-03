#include <iostream>
#include "Fixed.hpp"

/* int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
} */

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "Starting tests:" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a toInt = " << a.toInt() << std::endl;
	std::cout << "a when ++a = " << ++a << std::endl;
	std::cout << "a after ++a = " << a << std::endl;
	std::cout << "a when a++ = " << a++ << std::endl;
	std::cout << "a after a++ = " << a << std::endl;
	std::cout << "a when --a = " << --a << std::endl;
	std::cout << "a after --a = " << a << std::endl;
	std::cout << "a when a-- = " << a-- << std::endl;
	std::cout << "a after a-- = " << a << std::endl;
	std::cout << "a + 2 = " << (a + 2) << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a - 2 = " << (a + 2) << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a = 2 = " << (a = 2) << std::endl;
	std::cout << "b == " << b << std::endl;
	std::cout << "max between a = " << a << " and b = " << b << Fixed::max( a, b ) << std::endl;
	return 0;
}