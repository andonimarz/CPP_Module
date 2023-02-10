/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:24:53 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 17:34:04 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->type = src.type;
	this->_brain = new Brain();
	this->_brain = src._brain;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete (this->_brain);
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog operator=" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}


void	Dog::makeSound(void) const
{
	std::cout << this->type << " makeSound: Woof" << std::endl;
}
