/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:00 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 13:07:57 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain copy constructor" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

Brain::~Brain() {
	std::cout << "Brain destructor" << std::endl;
}

const Brain &Brain::operator=(const Brain &src) {
	std::cout << "Brain operator=" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}
