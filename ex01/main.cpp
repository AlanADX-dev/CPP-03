#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap clap("Thrall");
	ScavTrap scav("Sylvanas");

	clap.attack("Anduin");
	scav.attack("Anduin");
	scav.guardGate();
	return (0);
}
