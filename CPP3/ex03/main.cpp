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
    monster3 = monster;
    monster3.whoAmI();

    monster.attack("the air");
    monster.takeDamage(10);
    monster.beRepaired(10);
	
	return (0);
}
