/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:01:21 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/07 11:58:01 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << ".FragTrap. Constructor called. " << this->_name << " created." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << ".FragTrap. Destructor called. " << this->_name << " destroyed." << std::endl;
}
void	FragTrap::attack(std::string const & target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << ".FragTrap. " << this->_name << " attacks " << target <<
		", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << ".FragTrap. " << this->_name << " is out of energy! " << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->_energyPoints >= 50)
	{
		this->_energyPoints -= 50;
		std::cout << ".FragTrap. " << this->_name << " tries to high five everybody in the room." << std::endl;
	}
	else
		std::cout << ".FragTrap. " << this->_name << " tries to lift their arm but is too tired. Needs a rest." << std::endl;
}