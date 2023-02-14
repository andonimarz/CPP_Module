/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/13 16:37:14 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Charcater Constructor" << std::endl;
	this->name = "No_name";
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character::Character(std::string name)
{
	std::cout << "Charcater Constructor" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character::Character(Character const &src)
{
	std::cout << "Character Copy constructor" << std::endl;
	this->name = src.getName();
	for (int i = 0; i < 4; i++)
		if (src.materias[i] != NULL)
			this->materias[i] = src.materias[i]->clone();
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->materias[i] != NULL)
			delete (this->materias[i]);
}

Character &Character::operator=(const Character &src)
{
	if (this != &src)
	{
		this->name = src.getName();
		for (int i = 0; i < 4; i++)
			if (src.materias[i] != NULL)
				this->materias[i] = src.materias[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = m;
			std::cout << this->getName() << " equiped " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << this->getName() << " materias is full"<< std::endl;
}

void Character::unequip(int i)
{
	if (this->materias[i])
	{
		std::cout << this->getName() << " unequiped " << this->materias[i]->getType() << std::endl;
		delete (this->materias[i]); //Must we delete this?
		this->materias[i] = NULL;
	}
}

void Character::use(int i, ICharacter& target)
{
	if (this->materias[i])
	{
		if (this->materias[i]->getType() == "ice")
			std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
		else
			std::cout << "* heal " << target.getName() << "'s wounds *" << std::endl;
		delete (this->materias[i]);
		this->materias[i] = NULL;
	}
}
