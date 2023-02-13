/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:00 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 13:07:57 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor" << std::endl;
	this->type = "No type";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal constructor" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->type << " makeSound: No sound" << std::endl;
}
