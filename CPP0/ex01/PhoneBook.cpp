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
	//std::cout << "Size is " << this->size << std::endl;
	this->contacts[this->index % 8].setInfo(this->index % 8);
	this->index++;
}

//void	printPhoneBooks(void) const
//void	search(void) const