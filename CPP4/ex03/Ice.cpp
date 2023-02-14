/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 10:25:15 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	//std::cout << "Ice constructor" << std::endl;
	this->_type = "ice";
}

Ice::Ice(std::string const &type)
{
	//std::cout << "Ice constructor" << std::endl;
	this->_type = type;
}

Ice::~Ice(void)
{
	//std::cout << "Ice Destructor" << std::endl;
}

Ice &Ice::operator=(const Ice &src)
{
	//std::cout << "Ice operator=" << std::endl;
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	//std::cout << "Ice clone" << std::endl;
	Ice *aux = new Ice();
	aux->_type = this->getType();
	return (aux);
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice used against " << target.getName() << std::endl; 
}

std::string const & Ice::getType() const
{
	return (this->_type);
}
