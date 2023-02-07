/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:00:56 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/07 11:56:55 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main(void)
{
	ClapTrap	player("Johnny");
	ScavTrap	player2("Jimmy");
	FragTrap	player3("Timmy");

	std::cout << std::endl << "---------LETS FIGHT!---------" << std::endl << std::endl;
	player.attack("Jimmy");
	player2.takeDamage(0);
	player2.attack("Johnny");
	player.takeDamage(20);
	player.beRepaired(1);
	player3.attack("Johnny");
	player.takeDamage(30);
	player3.highFivesGuys();
	player2.guardGate();
	player3.highFivesGuys();
	std::cout << std::endl << "( Nobody likes Timmy... )" << std::endl << std::endl;
	return (0);
}
