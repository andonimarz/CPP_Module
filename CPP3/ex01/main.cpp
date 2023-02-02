#include "ScavTrap.hpp"


int	main(void)
{
	ClapTrap	player("Johnny");
	ScavTrap	player2("Jimmy");

	std::cout << "LETS FIGHT!" << std::endl;
	player.attack("Jimmy");
	player2.takeDamage(0);
	player.attack("Jimmy");
	player2.takeDamage(0);
	player2.beRepaired(10);
	player2.attack("Johnny");
	player.takeDamage(20);
	player.beRepaired(10);
	std::cout << "What an unfair fight..." << std::endl;
	return (0);
}
