#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(unsigned int energy_points, unsigned int attack_damage);
		~FragTrap();
		void	highFiveGuys(void);
};
