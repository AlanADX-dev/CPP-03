#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main( void )
{
	ClapTrap clap("Thrall");
	ScavTrap scav("Sylvanas");
	FlagTrap flag("Voljin");

	clap.attack("Anduin");
	scav.attack("Anduin");
	scav.guardGate();
	flag.highFivesGuys();
	return (0);
}
