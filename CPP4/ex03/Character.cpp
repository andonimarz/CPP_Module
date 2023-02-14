/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 12:06:04 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	//std::cout << "Character Constructor" << std::endl;
	this->name = "No_name";
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character::Character(std::string name)
{
	//std::cout << "Character Constructor" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character::Character(Character const &src)
{
	//std::cout << "Character deep copy constructor" << std::endl;
	this->name = src.getName();
	for (int i = 0; i < 4; i++)
		if (src.materias[i] != NULL)
			this->materias[i] = src.materias[i]->clone();
}

Character &Character::operator=(const Character &src)
{
	//std::cout << "Character operator=" << std::endl;
	if (this != &src)
	{
		this->name = src.getName();
		for (int i = 0; i < 4; i++)
			if (src.materias[i] != NULL)
				this->materias[i] = src.materias[i]->clone();
	}
	return (*this);
}

Character::~Character(void)
{
	//std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->materias[i] != NULL)
			delete (this->materias[i]);
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
			//std::cout << this->getName() << ": equiped " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << this->getName() << ": materia inventory full"<< std::endl;
}

void Character::unequip(int idx)
{
	if (this->materias[idx])
	{
		//std::cout << this->getName() << ": unequiped " << this->materias[idx]->getType() << std::endl;
		this->materias[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->materias[idx])
	{
		if (this->materias[idx]->getType() == "ice")
			std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
		else if (this->materias[idx]->getType() == "cure")
			std::cout << "* heal " << target.getName() << "'s wounds *" << std::endl;
		delete (this->materias[idx]);
		this->materias[idx] = NULL;
	}
	else
		std::cout << this->getName() << ": empty slot" << std::endl;
}
