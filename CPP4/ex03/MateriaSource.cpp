/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 10:46:32 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void)
{
	//std::cout << "MateriaSource Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	//std::cout << "MateriaSource destructor" << std::endl;
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
			//std::cout << learn->getType() << " learned" << std::endl;
			return;
		}
	}
	std::cout << "Can't learn more materias"<< std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
	{
		Ice *aux = new Ice("ice");
		return (aux);
	}
	else
	{
		Cure *aux = new Cure("cure");
		return (aux);
	}
	return (NULL);
}