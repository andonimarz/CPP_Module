/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:25:03 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 12:57:21 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->type << " makeSound: Meow" << std::endl;
}
