/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/13 16:45:04 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] != NULL)
			delete (this->materias[i]);
	}
}

void MateriaSource::learnMateria(AMateria *learn)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = learn;
			std::cout << learn->getType() << " equiped" << std::endl;
			return;
		}
	}
	std::cout << "Inventory full"<< std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
	{
		Ice *aux = new Ice(type);
		return (aux);
	}
	else
	{
		Cure *aux = new Cure(type);
		return (aux);
	}
	return (NULL);
}