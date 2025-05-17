#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Parameter Constructor called" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points,
			unsigned int attack_damage)
{
	std::cout << "ClapTrap Parameter Constructor called" << std::endl;
	_name = name;
	_hit_points = hit_points;
	_energy_points = energy_points;
	_attack_damage = attack_damage;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy Assignment Constructor called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (_attack_damage);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (_energy_points);
}

void	ClapTrap::loseEnergyPoint(void)
{
	_energy_points--;
}
