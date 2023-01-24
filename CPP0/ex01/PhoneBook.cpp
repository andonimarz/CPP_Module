#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook Constructor called" << std::endl;
	this->size = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook Destructor called" << std::endl;
	return;
}

void	PhoneBook::addcontact(void)
{
	this->contacts[this->index % 8].setInfo(this->index % 8);
	this->index++;
}

void	PhoneBook::printcontacts(void)
{
	for (int i = 0; i < 8; i++)
		this->contacts[i].print();
}

//void	search(void) const