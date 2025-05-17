#include "../inc/ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "Aaaaa... OPEN!" << std::endl;
	std::cout << std::endl;

	ClapTrap c;

	std::cout << std::endl;

	c.attack("Bob");
	c.takeDamage(5);
	c.beRepaired(4);
	c.takeDamage(9);
	c.beRepaired(4);

	std::cout << std::endl;
	return (0);
}
