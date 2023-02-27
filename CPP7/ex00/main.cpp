/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:15:17 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/27 12:25:28 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

/* int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
} */

int main(void)
{
	{
		std::cout << "===== with int =====" << std::endl;
		int a = 1;
		int b = 2;

		std::cout << "a = " << a << " and b = " << b << std::endl;
		::swap(a, b);
		std::cout << "* swap! *" << std::endl;
		std::cout << "a = " << a << " and b = " << b << std::endl;
		std::cout << "min = " << ::min(a, b) << std::endl;
		std::cout << "max = " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "===== with char =====" << std::endl;
		char a = 'A';
		char b = 'B';

		std::cout << "a = " << a << " and b = " << b << std::endl;
		::swap(a, b);
		std::cout << "* swap! *" << std::endl;
		std::cout << "a = " << a << " and b = " << b << std::endl;
		std::cout << "min = " << ::min(a, b) << std::endl;
		std::cout << "max = " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "===== with double =====" << std::endl;
		double a = 3.14;
		double b = 1.23;

		std::cout << "a = " << a << " and b = " << b << std::endl;
		::swap(a, b);
		std::cout << "* swap! *" << std::endl;
		std::cout << "a = " << a << " and b = " << b << std::endl;
		std::cout << "min = " << ::min(a, b) << std::endl;
		std::cout << "max = " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "===== with string =====" << std::endl;
		std::string a = "prueba1";
		std::string b = "prueba2";

		std::cout << "a = " << a << " and b = " << b << std::endl;
		::swap(a, b);
		std::cout << "* swap! *" << std::endl;
		std::cout << "a = " << a << " and b = " << b << std::endl;
		std::cout << "min = " << ::min(a, b) << std::endl;
		std::cout << "max = " << ::max(a, b) << std::endl;
	}
	return (0);
}