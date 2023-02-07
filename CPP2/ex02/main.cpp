/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:03:46 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/07 09:03:47 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* int main( void ) {
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
	Fixed a (0);
	Fixed b( Fixed( 3.21f ) * Fixed( 2 ) );

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
	std::cout << "a = " << a << "			b = " << b << std::endl;
	std::cout << "a.min (a, b) = " << a.min(a, b) << std::endl;
	std::cout << "a.max (a, b) = " << a.max(a, b) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a.max (a, b)++ = " << a.max(a, b)++ << std::endl;
	std::cout << "a.min (a, b)++ = " << a.min(a, b)++ << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "a = " << a << "			b = " << b << std::endl;
	std::cout << "++b.min (a, b) = " << ++b.min(a, b) << std::endl;
	std::cout << "++b.max (a, b) = " << ++b.max(a, b) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	const Fixed c(3);
	const Fixed d(4.2532F);
	std::cout << "const c = " << c << "		const d = " << d << std::endl;
	std::cout << "c.min (c, d) = " << c.min(c, d) << std::endl;
	std::cout << "c.max (c, d) = " << c.max(c, d) << std::endl;
	std::cout << "d.min (c, d) = " << d.min(c, d) << std::endl;
	std::cout << "d.max (c, d) = " << d.max(c, d) << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	return (0);
}
