#include "Zombie.hpp"

int	main(void)
{
	int N = 5;
	std::string name = "zombieName";

	Zombie *horde = zombieHorde( N, name );
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
