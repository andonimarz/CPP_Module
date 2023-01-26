/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:36:57 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/26 10:56:44 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	this->index = 0;
	return;
}

Contact::~Contact(void)
{
}

void	Contact::setInfo(int index, std::string *info)
{
	this->index = index;
	this->FirstName = info[0];
	this->LastName = info[1];
	this->NickName = info[2];
	this->PhoneNumber = info[3];
	this->DarkestSecret = info[4];
}

std::string Contact::truncInfo(std::string info) const
{
    if (info.size() > 10)
        return info.substr(0, 9) + ".";
    return info;
}

void	Contact::displayList(void)
{
	if (this->FirstName.empty() || this->LastName.empty() || this->NickName.empty())
		return ;
	std::cout << "|" << std::setw(10) << this->index;
	std::cout << "|" << std::setw(10) << this->truncInfo(this->FirstName);
	std::cout << "|" << std::setw(10) << this->truncInfo(this->LastName);
	std::cout << "|" << std::setw(10) << this->truncInfo(this->NickName);
	std::cout << "|" << std::endl;
}

void	Contact::displayContact(void)
{
	if (this->FirstName.empty() || this->LastName.empty() || this->NickName.empty())
	{
		std::cout << "Error: empty contact" << std::endl;
		return ;
	}
	std::cout << ".First name:........" << this->FirstName<< std::endl;
	std::cout << ".Last name:........." << this->LastName<< std::endl;
	std::cout << ".Nickname:.........." << this->NickName<< std::endl;
	std::cout << ".Telephone nb:......" << this->PhoneNumber<< std::endl;
	std::cout << ".Darkest secret:...." << this->DarkestSecret<< std::endl;
}
