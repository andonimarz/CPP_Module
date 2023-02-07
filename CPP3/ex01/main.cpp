/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:00:24 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/07 11:47:34 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	player("Johnny");
	ScavTrap	player2("Jimmy");

	std::cout << std::endl << "---------LETS FIGHT!---------" << std::endl << std::endl;
	player2.guardGate();
	player.attack("Jimmy");
	player2.takeDamage(0);
	player.attack("Jimmy");
	player2.takeDamage(0);
	player2.beRepaired(10);
	player2.attack("Johnny");
	player.takeDamage(20);
	std::cout << std::endl << "( What an unfair fight... )" << std::endl << std::endl;
	return (0);
}
