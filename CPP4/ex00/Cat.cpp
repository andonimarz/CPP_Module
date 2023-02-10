/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:25:03 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 14:01:21 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->type << " makeSound: Meow" << std::endl;
}
