/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:25:03 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 18:12:27 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->type = src.getType();
	this->_brain = new Brain(*src._brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	if (this->_brain)
		delete (this->_brain);
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat operator=" << std::endl;
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->type << " makeSound: Meow" << std::endl;
}
