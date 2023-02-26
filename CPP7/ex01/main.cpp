/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:24 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/26 19:18:33 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int	main(void)
{
	std::cout << "===== Printing an int array =====" << std::endl;
	int int_array[] = {1, 2, 3, 4};
	iter(int_array, 4, print);
	std::cout << std::endl;

	std::cout << "===== Printing a double array =====" << std::endl;
	double double_array[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter(double_array, 5, print);
	std::cout << std::endl;

	std::cout << "===== Printing a char array =====" << std::endl;
	char char_array[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	iter(char_array, 6, print);
	std::cout << std::endl;

	return (0);
}
