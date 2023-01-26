
#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "Summoning a Zombie..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroying " << this->_name << std::endl;
}

void	Zombie::announce( void ) 
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}