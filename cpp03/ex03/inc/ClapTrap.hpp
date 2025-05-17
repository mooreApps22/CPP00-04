#pragma once
#include <iostream>

class	ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name); //
		ClapTrap(std::string name,
			unsigned int hit_points,
			unsigned int energy_points,
			unsigned int attack_damage);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		int				check_points(void);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName(void) const;
		unsigned int	getAttackDamage(void) const;
		unsigned int	getEnergyPoints(void) const;
		void			loseEnergyPoint(void);

};
