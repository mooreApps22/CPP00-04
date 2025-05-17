#include "../inc/FragTrap.hpp"
#include "../inc/ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 30)
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Can I, " << this->getName() << ", get a HIGH FIVE!?!?!?" << std::endl;
}
