#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap", 100, 50, 20)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(unsigned int energy_points)
{
	std::cout << "ScavTrap Parameter Constructor called" << std::endl;
	_energy_points = energy_points;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "I, " << this->getName() << ", am in Gate-keeper Mode!!!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (target.empty())
		std::cout << this->getName() <<
			" can't attack if there is no target." << std::endl;
		
	if (check_points() == 1)
		return ;		
	std::cout << this->getName() << " ATTACKS " << target << " WITH STYLE, causing "	<<
		this->getAttackDamage() << " points of damage!" << std::endl;
	this->loseEnergyPoint();
}
