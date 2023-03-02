/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:37:38 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/02 12:41:47 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/* int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "===== Span created =====" << std::endl;
	sp.printSpan();

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
} */

int main()
{
	int	vectorLen = 100;
	Span sp(vectorLen);
	std::cout << std::endl;
	sp.addNumbers(vectorLen);
	sp.printSpan();

	std::cout << std::endl << "* Trying to add a number when Span is full *" << std::endl;
	try
	{
		sp.addNumber(999);
	}
	catch(const std::exception& e)
	{
		std::cout << "===== Exception! =====" << std::endl;
		std::cerr << e.what() << '\n';
		std::cout << "======================" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;

    return (0);
}
