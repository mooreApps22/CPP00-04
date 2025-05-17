#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(unsigned energy_points);
		~ScavTrap();
		void	guardGate(void);
		void	attack(const std::string& target);
};
