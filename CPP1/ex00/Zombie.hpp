#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce( void );
};

// newZombie.cpp
Zombie	*newZombie( std::string name );

// randomChump.cpp
void	randomChump( std::string name );

#endif 