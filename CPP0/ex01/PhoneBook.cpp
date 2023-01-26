#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	this->size = 0;
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

std::string PhoneBook::getbuff(std::string msg, int num) const
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

void	PhoneBook::getInfo(void)
{
	this->info[0] = this->getbuff("Enter the first name: ", 0);
	this->info[1] = this->getbuff("Enter the last name: ", 0);
	this->info[2] = this->getbuff("Enter the nickname: ", 0);
	this->info[3] = this->getbuff("Enter the phone number: ", 1);
	this->info[4] = this->getbuff("Enter the darkest secret: ", 0);
}

void	PhoneBook::addContact(void)
{
	getInfo();
	this->contacts[this->index % 8].setInfo(this->index % 8, this->info);
	this->index++;
}

void	PhoneBook::printContacts(void)
{
	std::cout << "|" << std::setw(10) << "INDEX" << std::flush;
	std::cout << "|" << std::setw(10) << "FIRST NAME" << std::flush;
	std::cout << "|" << std::setw(10) << "LAST NAME" << std::flush;
	std::cout << "|" << std::setw(10) << "NICKNAME" << std::flush;
	std::cout << "|" << std::endl;
	for (int i = 0; i < 8; i++)
		this->contacts[i].displayList();
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
			this->contacts[buff[0] - '0'].displayContact();
			break ;
		}
		else
			std::cout << "Error: enter a valid number" << std::endl;
	}
}
