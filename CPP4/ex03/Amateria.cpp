/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 13:38:16 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	//std::cout << "AMateria Constructor" << std::endl;
	this->_type = "No_type";
}

AMateria::AMateria(std::string const &type)
{
	//std::cout << "AMateria Constructor" << std::endl;
	this->_type = type;
}

AMateria::AMateria(AMateria const &src)
{
	//std::cout << "AMateria deep copy constructor" << std::endl;
	*this = src;
}

AMateria::~AMateria(void)
{
	//std::cout << "AMateria destructor" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &src)
{
	//std::cout << "AMateria operator=" << std::endl;
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return ((std::string const &)this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria use(): This should never appear" << std::endl; 
}
