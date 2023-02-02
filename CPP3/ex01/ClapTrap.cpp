#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called. " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << "Copy constructor called. " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called. " << this->_name << " destroyed." << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "operator= called. " << this->_name << " = " << src._name << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<
		", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount; 
	std::cout << "ClapTrap " << this->_name << " takes " << amount <<
	" points of damage! It's life total is " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " drinks a life potion. Restores " << amount <<
		" life points! It's life total is " << this->_hitPoints << std::endl;
}
