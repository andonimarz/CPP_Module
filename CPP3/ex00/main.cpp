#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	player("Johnny");
	ClapTrap	player2("Jimmy");

	std::cout << "LETS FIGHT!" << std::endl;
	player.attack("Jimmy");
	player2.takeDamage(5);
	player.attack("Jimmy");
	player2.takeDamage(5);
	player2.beRepaired(10);
	player2.attack("Johnny");
	player.takeDamage(2);
	player.takeDamage(2);
	player.beRepaired(10);
	return (0);
}
