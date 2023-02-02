#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main(void)
{
	ClapTrap	player("Johnny");
	ScavTrap	player2("Jimmy");
	FragTrap	player3("Timmy");

	std::cout << "LETS FIGHT!" << std::endl;
	player.attack("Jimmy");
	player2.takeDamage(0);
	player2.attack("Johnny");
	player.takeDamage(20);
	player.beRepaired(1);
	player3.highFivesGuys();
	player3.highFivesGuys();
	player3.highFivesGuys();
	std::cout << "Nobody likes Timmy..." << std::endl;
	return (0);
}
