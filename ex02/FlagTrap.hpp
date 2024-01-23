#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	FlagTrap: public ClapTrap
{

	public:
		FlagTrap();
		FlagTrap(std::string name);
		FlagTrap(const FlagTrap& copy);
		FlagTrap& operator=(const FlagTrap& copy);
		~FlagTrap();

		void	highFivesGuys(void);

};



#endif
