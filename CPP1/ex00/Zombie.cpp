/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:27:14 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/03 13:23:20 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "Summoning a Zombie..." << std::endl;
}

Zombie::Zombie( std::string name ) : _name(name)
{
	std::cout << this->_name << " created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroying " << this->_name << std::endl;
}

void	Zombie::announce( void ) 
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
