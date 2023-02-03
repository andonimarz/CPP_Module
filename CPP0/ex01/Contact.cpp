/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:36:57 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/03 08:55:47 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) : _index(0)
{
}

Contact::~Contact(void)
{
}

void	Contact::setInfo(int index, std::string *info)
{
	this->_index = index;
	this->_FirstName = info[0];
	this->_LastName = info[1];
	this->_NickName = info[2];
	this->_PhoneNumber = info[3];
	this->_DarkestSecret = info[4];
}

std::string Contact::_truncInfo(std::string info) const
{
    if (info.size() > 10)
        return info.substr(0, 9) + ".";
    return info;
}

void	Contact::displayList(void)
{
	if (this->_FirstName.empty() || this->_LastName.empty() || this->_NickName.empty())
		return ;
	std::cout << "|" << std::setw(10) << this->_index;
	std::cout << "|" << std::setw(10) << this->_truncInfo(this->_FirstName);
	std::cout << "|" << std::setw(10) << this->_truncInfo(this->_LastName);
	std::cout << "|" << std::setw(10) << this->_truncInfo(this->_NickName);
	std::cout << "|" << std::endl;
}

void	Contact::displayContact(void)
{
	if (this->_FirstName.empty() || this->_LastName.empty() || this->_NickName.empty())
	{
		std::cout << "Error: empty contact" << std::endl;
		return ;
	}
	std::cout << ".First name:........" << this->_FirstName<< std::endl;
	std::cout << ".Last name:........." << this->_LastName<< std::endl;
	std::cout << ".Nickname:.........." << this->_NickName<< std::endl;
	std::cout << ".Telephone nb:......" << this->_PhoneNumber<< std::endl;
	std::cout << ".Darkest secret:...." << this->_DarkestSecret<< std::endl;
}
