/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:36:57 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/24 22:31:24 by amarzana         ###   ########.fr       */
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

static int buffisnum(std::string buff)
{
    int i;

    i = 0;
    while (buff[i])
    {
		if (buff[i] < '0' || buff[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

std::string Contact::getbuff(std::string msg, int num) const {
    std::string buff;
    bool        valid = false;
    do
    {
        std::cout << msg << std::flush;
        std::cin >> buff;
        if (!buff.empty() && (num == 0 || (num == 1 && buffisnum(buff))))
            valid = true;
        else {
            std::cin.clear();
            std::cout << "Error: Invalid input" << std::endl;
        }
    } while (!valid);
    return (buff);
}

void	Contact::setInfo(int index)
{
	this->index = index;
	this->FirstName = this->getbuff("Enter the first name: ", 0);
	this->LastName = this->getbuff("Enter the last name: ", 0);
	this->NickName = this->getbuff("Enter the nickname: ", 0);
	this->PhoneNumber = this->getbuff("Enter the phone number: ", 1);
	this->DarkestSecret = this->getbuff("Enter the darkest secret: ", 0);
}

void	Contact::print(void)
{
	std::cout << this->index << std::endl;
	std::cout << this->FirstName << std::endl;
	std::cout << this->LastName << std::endl;
	std::cout << this->NickName << std::endl;
	std::cout << this->PhoneNumber << std::endl;
	std::cout << this->DarkestSecret << std::endl;
}