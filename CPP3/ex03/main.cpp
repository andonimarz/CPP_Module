/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:01:27 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/07 13:49:04 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int	main(void)
{
	std::cout << std::endl << "---------LET'S START!---------" << std::endl << std::endl;
	std::cout << "---------CONSTRUCTORS---------" << std::endl << std::endl;
	std::cout << "__________ monster: " << std::endl;
	DiamondTrap monster( "Edgar" );
	std::cout << "__________ monster2: " << std::endl;
	DiamondTrap monster2("Frank");

	std::cout << "__________ monster.whoAmI(): " << std::endl;
	monster.whoAmI();
	std::cout << "__________ monster2.whoAmI(): " << std::endl;
	monster2.whoAmI();

	std::cout << std::endl << "__________ Frank becomes a clone of Edgar" << std::endl;
	monster2 = monster;
	std::cout << "__________ monster2.whoAmI(): " << std::endl;
	monster2.whoAmI();

	std::cout << std::endl << "---------Trying functions---------" << std::endl << std::endl;
	std::cout << "__________ monster.attack(): " << std::endl;
	monster.attack("the party");
	std::cout << "__________ monster.guardGate(): " << std::endl;
	monster.guardGate();
	std::cout << "__________ monster2.takeDamage(): " << std::endl;
	monster2.takeDamage(10);
	std::cout << "__________ monster2.beRepaired(): " << std::endl;
	monster2.beRepaired(10);
	std::cout << "__________ monster2.highFivesGuys(): " << std::endl;
	monster2.highFivesGuys();

	std::cout << std::endl << "---------DESTRUCTORS---------" << std::endl << std::endl;
	return (0);
}
