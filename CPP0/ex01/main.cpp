/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:34:08 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/24 22:32:58 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	book;
	std::string	buff;

	if (argc != 1)
		std::cout << "Error: Invalid args" << std::endl;
	else
	{
		while (1)
		{
			std::cout << "Input a command: ";
			std::cin >> buff;
			if (buff == "ADD")
				book.addcontact();
			else if (buff == "SEARCH")
				book.printcontacts();
			else if (buff == "EXIT")
				break ;	
			else
				std::cout << "Error: invalid command" << std::endl;
		}
	}
	return 0;
}