/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 10:23:58 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	//std::cout << "Cure constructor" << std::endl;
	this->_type = "cure";
}

Cure::Cure(std::string const &type)
{
	//std::cout << "Cure constructor" << std::endl;
	this->_type = type;
}

Cure::~Cure(void)
{
	//std::cout << "Cure Destructor" << std::endl;
}

Cure &Cure::operator=(const Cure &src)
{
	//std::cout << "Cure operator=" << std::endl;
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	//std::cout << "Cure clone()" << std::endl;
	Cure *aux = new Cure();
	aux->_type = this->getType();
	return (aux);
}

void Cure::use(ICharacter &target)
{
	std::cout << "Heal used in " << target.getName() << std::endl; 
}

std::string const & Cure::getType() const
{
	return (this->_type);
}
