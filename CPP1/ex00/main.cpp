#include "Zombie.hpp"

int	main(void)
{
	std::string name;

    std::cout << "--> First case: normal iteration" << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
	Zombie zombi1(name);
	std::cout << "Calling  " << name << "->announce" << std::endl << std::flush;
	zombi1.announce();
	std::cout << "-----------------------------" << std::endl;
	std::cout << "--> Second case: newZombie()" << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;
	std::cout << "Calling newZombie()..." << std::endl;
	Zombie *zombi2 = newZombie(name);
	std::cout << "Calling  " << name << "->announce" << std::flush;
	std::cout << std::endl;
	zombi2->announce();
	delete zombi2;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "--> Third case: randomChump()" << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;
	std::cout << "Calling randomChump()..." << std::endl;
	randomChump(name);
	std::cout << "-----------------------------" << std::endl;
	return 0;
}