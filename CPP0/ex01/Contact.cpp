/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:36:57 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/24 18:21:48 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact Constructor called" << std::endl;
	this->index = 0;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Contact Destructor called" << std::endl;
	return;
}

std::string	Contact::getFirstName(void) const
{
	return this->FirstName;
}

void	Contact::setFirstName(const std::string str)
{
	if (!str.empty())
		this->FirstName = str;
	return;
}

std::string Contact::getbuff(std::string msg) const {
    std::string buff;
    bool        valid = false;
    do
    {
        std::cout << msg << std::flush;
        std::cin >> buff;
        if (!buff.empty())
            valid = true;
        else {
            std::cin.clear();
            std::cout << "Error: Invalid input; please try again." << std::endl;
        }
    } while (!valid);
    return (buff);
}

void	Contact::setInfo(int index)
{
	this->index = index;
	this->FirstName = this->getbuff("Enter the first name: ");
	this->LastName = this->getbuff("Enter the last name: ");
	this->NickName = this->getbuff("Enter the nickname: ");
	this->PhoneNumber = this->getbuff("Enter the phone number: "); //A checker needed
	this->DarkestSecret = this->getbuff("Enter the darkest secret: ");
}