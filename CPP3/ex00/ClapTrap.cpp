/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:00:07 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/07 11:10:54 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "_ClapTrap_ Constructor called. " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << "_ClapTrap_ Copy constructor called. " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "_ClapTrap_ Destructor called. " << this->_name << " destroyed." << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "_ClapTrap_ operator= called. " << this->_name << " = " << src._name << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "_ClapTrap_ " << this->_name << " attacks " << target <<
		", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "_ClapTrap_ " << this->_name << " is out of energy! " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > amount)
	{
		this->_hitPoints -= amount;
		std::cout << "_ClapTrap_ " << this->_name << " takes " << amount <<
			" points of damage! It's life total is " << this->_hitPoints << std::endl;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << "_ClapTrap_ " << this->_name << " takes " << amount <<
			" points of damage. Holy Clap!! " << this->_name << " is dead! " << std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	std::cout << "_ClapTrap_ " << this->_name << " drinks a life potion. Restores " << amount <<
		" hit points! It's life total is " << this->_hitPoints << std::endl;
}
