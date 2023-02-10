/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:24:53 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 12:53:30 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}


void	Dog::makeSound(void) const
{
	std::cout << this->type << " makeSound: Woof" << std::endl;
}
