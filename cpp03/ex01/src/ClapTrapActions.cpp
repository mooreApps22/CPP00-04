#include "../inc/ClapTrap.hpp"

int		ClapTrap::check_points(void)
{
	if (_hit_points <= 0)
	{
		std::cout << _name <<
			" can't do anything because it doesn't have any hit points." << std::endl;
		return (1);
	}
	else if (_energy_points <= 0) 
	{
		std::cout << _name <<
			" can't do anything because it doesn't have any energy points." << std::endl;
		return (1);
	}
	return (0);
}

void	ClapTrap::attack(const std::string& target)
{
	if (target.empty())
		std::cout << _name <<
			" can't attack if there is no target." << std::endl;
		
	if (check_points() == 1)
		return ;		
	std::cout << _name << " attacks " << target << ", causing "	<<
		_attack_damage << " points of damage!" << std::endl;
	_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " was attacked and lost " <<
		amount << " hit points!" << std::endl;
	_hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (check_points() == 1)
		return ;		
	std::cout << _name << " has repaired itself by " << amount << " hit points."  << std::endl;
	_hit_points += amount;
	_energy_points--;
}
