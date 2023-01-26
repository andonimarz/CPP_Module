#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
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

std::string PhoneBook::_getbuff(std::string msg, int num) const
{
	std::string buff;
	
	do {
		std::cout << msg << std::flush;
		std::cin >> buff;
		if (!buff.empty() && (num == 0 || (num == 1 && buffisnum(buff))))
			return (buff);
		else {
			std::cin.clear();
			std::cout << "Error: Invalid input" << std::endl;
		}
	} while (1);
}

void	PhoneBook::_getInfo(void)
{
	this->_info[0] = this->_getbuff("Enter the first name: ", 0);
	this->_info[1] = this->_getbuff("Enter the last name: ", 0);
	this->_info[2] = this->_getbuff("Enter the nickname: ", 0);
	this->_info[3] = this->_getbuff("Enter the phone number: ", 1);
	this->_info[4] = this->_getbuff("Enter the darkest secret: ", 0);
}

void	PhoneBook::addContact(void)
{
	_getInfo();
	this->_contacts[this->_index % 8].setInfo(this->_index % 8, this->_info);
	this->_index++;
}

void	PhoneBook::printContacts(void)
{
	std::cout << "|" << std::setw(10) << "INDEX" << std::flush;
	std::cout << "|" << std::setw(10) << "FIRST NAME" << std::flush;
	std::cout << "|" << std::setw(10) << "LAST NAME" << std::flush;
	std::cout << "|" << std::setw(10) << "NICKNAME" << std::flush;
	std::cout << "|" << std::endl;
	for (int i = 0; i < 8; i++)
		this->_contacts[i].displayList();
}

void	PhoneBook::display(void)
{
	std::string	buff;

	while (1)
	{
		std::cout << "Input the index of the contact to display: ";
		std::cin >> buff;
		if (buff.size() == 1 && buff[0] >= '0' && buff[0] <= '7')
		{
			this->_contacts[buff[0] - '0'].displayContact();
			break ;
		}
		else
			std::cout << "Error: enter a valid number" << std::endl;
	}
}
