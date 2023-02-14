/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/13 16:36:31 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Default")
{
	std::cout << "AMateria Constructor" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria Constructor" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria Copy constructor" << std::endl;
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &src)
{
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
	std::cout << "This should never appear" << std::endl; 
}
