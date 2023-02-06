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

/* int main( void )
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
} */

int main( void )
{
	Fixed a (0);
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a = " << a << std::endl;
	a = 2;
	std::cout << "a = 2 = " << a << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a.toFloat() = " << a.toFloat() << std::endl;
	std::cout << "b.toFloat() = " << b.toFloat() << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a.toInt() = " << a.toInt() << std::endl;
	std::cout << "b.toInt() = " << b.toInt() << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "- Comparison operators: >, <, >=, <=, == and != -" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a > 3 = " << (a > 3) << std::endl;
	std::cout << "a > 1 = " << (a > 1) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a < 3 = " << (a < 3) << std::endl;
	std::cout << "a < 1 = " << (a < 1) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a >= 3 = " << (a >= 3) << std::endl;
	std::cout << "a >= 1 = " << (a >= 1) << std::endl;
	std::cout << "a >= 2 = " << (a >= 2) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a <= 3 = " << (a <= 3) << std::endl;
	std::cout << "a <= 1 = " << (a <= 1) << std::endl;
	std::cout << "a <= 2 = " << (a <= 2) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a == 2 = " << (a == 2) << std::endl;
	std::cout << "a == b = " << (a == b) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a != 2 = " << (a != 2) << std::endl;
	std::cout << "a != b = " << (a != b) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "------ Arithmetic operators: +, -, *, and / -----" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a + 2 = " << (a + 2) << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a - 2 = " << (a - 2) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a * 2 = " << (a * 2) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a / 2 = " << (a / 2) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "- Increment (++a, a++) and decrement (--a, a--) -" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a = " << a << "			b = " << b << std::endl;
	std::cout << "++a returns = " << ++a << "		++b = " << ++b << std::endl;
	std::cout << "a after ++a = " << a << "		b after ++b = " << b << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a = " << a << "			b = " << b << std::endl;
	std::cout << "a++ returns = " << a++ << "		b++ = " << b++ << std::endl;
	std::cout << "a after a++ = " << a << "		b after b++ = " << b << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a = " << a << "			b = " << b << std::endl;
	std::cout << "--a returns = " << --a << "		--b = " << --b << std::endl;
	std::cout << "a after --a = " << a << "		b after --b = " << b << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a = " << a << "			b = " << b << std::endl;
	std::cout << "a-- returns = " << a-- << "		b-- = " << b-- << std::endl;
	std::cout << "a after a-- = " << a << "		b after b-- = " << b << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "- min, max -" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	return 0;
}