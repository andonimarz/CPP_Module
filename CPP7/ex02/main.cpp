/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:33:11 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/27 15:23:42 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	{
		std::cout << "===== CHAR =====" << std::endl;
		Array<char> a(5);

		for (unsigned int i = 0; i < a.size(); ++i)
			a[i] = i * i + 33;

		std::cout << "Array a of 5 char: ";
		for (unsigned int i = 0; i < a.size(); ++i)
			std::cout << a[i] << " ";
		std::cout << std::endl;

		std::cout << "Array b (clone of a): ";
		Array<char> b(a);
		for (unsigned int i = 0; i < b.size(); ++i)
			std::cout << b[i] << " ";
		std::cout << std::endl;

		Array<char> c;
		std::cout << "Array c (empty):";
		for (unsigned int i = 0; i < c.size(); ++i)
			std::cout << c[i] << " ";
		std::cout << std::endl;

		std::cout << "=== c = b ===" << std::endl;
		c = b;

		std::cout << "Array c: ";
		for (unsigned int i = 0; i < c.size(); ++i)
			std::cout << c[i] << " ";
		std::cout << std::endl;

		std::cout << "=== b[2] = 100 = 'd' ===" << std::endl;
		b[2] = 100;

		std::cout << "Array b (modified): ";
		for (unsigned int i = 0; i < b.size(); ++i)
			std::cout << b[i] << " ";
		std::cout << std::endl;

		std::cout << "=== Final result ===" << std::endl;
		std::cout << "Array a: ";
		for (unsigned int i = 0; i < a.size(); ++i)
			std::cout << a[i] << " ";
		std::cout << std::endl;

		std::cout << "Array b: ";
		for (unsigned int i = 0; i < b.size(); ++i)
			std::cout << b[i] << " ";
		std::cout << std::endl;

		std::cout << "Array c: ";
		for (unsigned int i = 0; i < c.size(); ++i)
			std::cout << c[i] << " ";
		std::cout << std::endl;

		std::cout << "=== Trying to display c[10] ===" << std::endl;
		try {
			std::cout << c[10] << std::endl;
		} catch (const std::exception& e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "===== INT =====" << std::endl;
		Array<int> a(5);

		for (unsigned int i = 0; i < a.size(); ++i)
			a[i] = i * i;

		std::cout << "Array a of 5 int: ";
		for (unsigned int i = 0; i < a.size(); ++i)
			std::cout << a[i] << " ";
		std::cout << std::endl;

		std::cout << "Array b (clone of a): ";
		Array<int> b(a);
		for (unsigned int i = 0; i < b.size(); ++i)
			std::cout << b[i] << " ";
		std::cout << std::endl;

		Array<int> c;
		std::cout << "Array c (empty):";
		for (unsigned int i = 0; i < c.size(); ++i)
			std::cout << c[i] << " ";
		std::cout << std::endl;

		std::cout << "=== c = b ===" << std::endl;
		c = b;

		std::cout << "Array c: ";
		for (unsigned int i = 0; i < c.size(); ++i)
			std::cout << c[i] << " ";
		std::cout << std::endl;

		std::cout << "=== b[2] = 100 ===" << std::endl;
		b[2] = 100;

		std::cout << "Array b (modified): ";
		for (unsigned int i = 0; i < b.size(); ++i)
			std::cout << b[i] << " ";
		std::cout << std::endl;

		std::cout << "=== Final result ===" << std::endl;
		std::cout << "Array a: ";
		for (unsigned int i = 0; i < a.size(); ++i)
			std::cout << a[i] << " ";
		std::cout << std::endl;

		std::cout << "Array b: ";
		for (unsigned int i = 0; i < b.size(); ++i)
			std::cout << b[i] << " ";
		std::cout << std::endl;

		std::cout << "Array c: ";
		for (unsigned int i = 0; i < c.size(); ++i)
			std::cout << c[i] << " ";
		std::cout << std::endl;

		std::cout << "=== Trying to display c[10] ===" << std::endl;
		try {
			std::cout << c[10] << std::endl;
		} catch (const std::exception& e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
	return (0);
}
