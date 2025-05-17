#include "../inc/FragTrap.hpp"
#include "../inc/ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 30)
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(unsigned int hit_points, unsigned int attack_damage)
{
	std::cout << "FragTrap Parameter Constructor called" << std::endl;
	_hit_points = hit_points;
	_attack_damage = attack_damage;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Can I, " << this->getName() << ", get a HIGH FIVE!?!?!?" << std::endl;
}
