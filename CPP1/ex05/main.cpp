/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:02:45 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/03 14:10:07 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	buff;

	std::cout << "Starting test..." << std::endl;
	while (1)
	{
		std::cout << "------------------------------------" << std::endl;
		std::cout << "Please choose a complain level: " << std::endl;
		std::cout << "Options: DEBUG, INFO, WARNING, ERROR, ALL, EXIT" << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << " > ";
		std::cin >> buff;
		std::cout << "------------------------------------" << std::endl;
		std::cout << buff << " MODE CHOSEN..." << std::endl;
		std::cout << "------------------------------------" << std::endl;
		if (buff == "ALL")
		{
			std::cout << "Starting DEBUG level..." << std::endl;
			harl.complain("DEBUG");
			std::cout << "------------------------------------" << std::endl;
			std::cout << "Starting INFO level..." << std::endl;
			harl.complain("INFO");
			std::cout << "------------------------------------" << std::endl;
			std::cout << "Starting WARNING level..." << std::endl;
			harl.complain("WARNING");
			std::cout << "------------------------------------" << std::endl;
			std::cout << "Starting ERROR level..." << std::endl;
			harl.complain("ERROR");
		}
		else if (buff == "EXIT")
			break ;
		else
			harl.complain(buff);
		std::cout << "------------------------------------" << std::endl;
	}
	std::cout << "THAT'S ALL" << std::endl;
}
