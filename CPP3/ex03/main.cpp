#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int	main(void)
{
	DiamondTrap monster( "monster" );
    DiamondTrap monster2( monster );
    DiamondTrap monster3("clone");

    monster.whoAmI();
    monster2.whoAmI();
    monster3.whoAmI();
    monster3 = monster;
	monster3.whoAmI();
    monster.attack("the party");
    monster2.takeDamage(10);
    monster3.beRepaired(10);
	return (0);
}
