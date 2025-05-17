#pragma once
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*  
        ClapTrap
		  / \
		 /   \
        /     \
ScavTrap	   FragTrap
        \     /
		 \   /
		  \ /
		 DiamondTrap
*/

class	DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(const std::string& name);
		~DiamondTrap(void);
		void	whoAmI(void);
		void	attack(const std::string& target);
};
