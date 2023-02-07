/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:01:14 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/07 13:45:01 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 100;
	FragTrap::_attackDamage = 100;
	std::cout << "*DiamondTrap* Constructor called. " << _name << " created." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "*DiamondTrap* Destructor called." << this->_name << " destroyed." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "*DiamondTrap* " << this->_name << "'s ClapTrap name is " << ClapTrap::_name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "*DiamondTrap* operator= called. " << this->_name << " = " << src._name << std::endl;
	this->_name = src._name;
	ClapTrap::_name = src.ClapTrap::_name;
	FragTrap::_hitPoints = src.FragTrap::_hitPoints;
	ScavTrap::_energyPoints = src.ScavTrap::_energyPoints;
	FragTrap::_attackDamage = src.FragTrap::_attackDamage;
	return (*this);
}