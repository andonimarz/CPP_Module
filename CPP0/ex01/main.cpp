/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:34:08 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/23 19:35:16 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



int	main(int argc, char **argv)
{
	std::string	buff;
	if (argc != 1)
		std::cout << "Error: Invalid args" << std::endl;
	else
	{
		while (1)
		{
			std::cout << "Input a command: ";
			std::getline(std::cin, buff);
			if (buff == "ADD")
				std::cout << "ft_add" << std::endl;
			else if (buff == "SEARCH")
				std::cout << "ft_search" << std::endl;
			else if (buff == "EXIT")
				break ;	
			else
				std::cout << "Error: invalid command" << std::endl;
		}
	}
	return 0;
}