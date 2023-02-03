/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:52:24 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/03 14:01:43 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 5;
	std::string name = "zombieName";

	Zombie *horde = zombieHorde( N, name );
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[](horde);
	return (0);
}
