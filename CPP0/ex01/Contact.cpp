/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:36:57 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/23 19:51:14 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

std::string	Contact::getFirstName(void) const
{
	return this->FirstName;
}

// this way allows the user to change the _foo attribute
void	setFirstName(const std::string str)
{
	// don't allow _foo to have a negative value
	if (!str.empty())
		this->FirsName = str;
	return;
}