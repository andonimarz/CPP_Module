/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:00:13 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/07 13:56:21 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	player1("Johnny");
	ClapTrap	player2("Jimmy");

	std::cout << std::endl << "---------LETS FIGHT!---------" << std::endl;
	player1.attack("Jimmy");
	player1.attack("Jimmy");
	std::cout << std::endl << "( Jimmy stabs himself twice by accident )" << std::endl;
	player2.takeDamage(5);
	player2.takeDamage(5);
	player2.beRepaired(10);
	player2.attack("Johnny");
	std::cout << std::endl << "( Johnny stumbles and falls to the ground )" << std::endl;
	player1.takeDamage(2);
	player1.beRepaired(10);
	std::cout << std::endl << "-----COPY----- " << std::endl;
	ClapTrap	player3(player1);
	player3.takeDamage(0);
	std::cout << std::endl << "-----Johnny becomes a clone of Jimmy-----" << std::endl;
	player1 = player2;
	player1.takeDamage(0);
	player2.takeDamage(2);
	player1.takeDamage(0);
	std::cout << std::endl << "-----THAT'S ALL----- " << std::endl;
	return (0);
}
