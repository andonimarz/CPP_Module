/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:00 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 13:35:42 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor" << std::endl;
	this->type = "No type";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal constructor" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
