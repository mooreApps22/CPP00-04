#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "Repetitive work" << std::endl;

	std::cout << std::endl;

	ClapTrap c;
	ScavTrap s;
	FragTrap f;

	std::cout << std::endl;

	c.attack("Bob");
	c.takeDamage(5);
	c.beRepaired(4);
	c.takeDamage(9);
	c.beRepaired(4);

	std::cout << std::endl;
	
	s.guardGate();
	s.attack("Sal");
	s.takeDamage(50);
	s.beRepaired(40);
	s.takeDamage(90);
	s.beRepaired(40);

	std::cout << std::endl;

	f.highFiveGuys();
	f.attack("a disabled nun");
	f.takeDamage(50);
	f.beRepaired(40);
	f.takeDamage(90);
	f.beRepaired(40);

	std::cout << std::endl;
	
	return (0);
}
