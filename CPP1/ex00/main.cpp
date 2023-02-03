/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:27:06 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/03 13:19:56 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "--> First case: normal iteration" << std::endl;
	std::cout << "Zombie name: pepe" << std::endl;

	Zombie zombi1("pepe");

	std::cout << "Calling  pepe->announce" << std::endl;

	zombi1.announce();

	std::cout << "-----------------------------" << std::endl;
	std::cout << "Testing empty constructor." << std::endl;

	Zombie zombi0;

	std::cout << "Calling  ->announce" << std::endl;

	zombi0.announce();

	std::cout << "-----------------------------" << std::endl;
	std::cout << "--> Second case: newZombie()" << std::endl;
	std::cout << "Zombie name: pipo" << std::endl;
	std::cout << "Calling newZombie()..." << std::endl;

	Zombie *zombi2;
	zombi2 = newZombie("pipo");

	std::cout << "Calling pipo->announce" << std::endl;

	zombi2->announce();

	delete (zombi2);

	std::cout << "-----------------------------" << std::endl;
	std::cout << "--> Third case: randomChump()" << std::endl;
	std::cout << "Zombie name: pupo" << std::endl;
	std::cout << "Calling randomChump()..." << std::endl;

	randomChump("pupo");

	std::cout << "-----------------------------" << std::endl;
	return (0);
}
