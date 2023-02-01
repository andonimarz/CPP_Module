#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Constructor called. " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called. " << this->_name << " destroyed." << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<
		", causing " << this->_AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_Hitpoints -= amount; 
	std::cout << "ClapTrap " << this->_name << " takes " << amount <<
	" points of damage! It's life total is " << this->_Hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_Hitpoints += amount;
	std::cout << "ClapTrap " << this->_name << " drinks a life potion. Restores " << amount <<
		" life points! It's life total is " << this->_Hitpoints << std::endl;
}
