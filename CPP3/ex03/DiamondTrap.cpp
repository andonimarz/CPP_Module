#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap Constructor called. " << this->_name << " created." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called." << this->_name << " destroyed." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this->_name << "'s ClapTrap name is " << ClapTrap::_name << std::endl;
}
