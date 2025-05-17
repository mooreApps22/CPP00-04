#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"
#include "../inc/AMateria.hpp"

Character::Character() : _name("Character"), _floorCount(0)
{
   // std::cout << "Character Default Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_floor[i] = NULL;
}

Character::Character(std::string const& name) : _name(name)
{
    //std::cout << "Character Parameter Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_floor[i] = NULL;
}

Character::Character(const Character& other) : _name(other._name), _floorCount(0)
{
    //std::cout << "Character Copy Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : NULL;
	for (int i = 0; i < 100; i++)
		_floor[i] = NULL;
}

Character& Character::operator=(const Character& other)
{
   // std::cout << "Character Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : NULL;
		}
    }
    return *this;
}

Character::~Character()
{
   // std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < 100; i++)
		if (_floor[i])
			delete _floor[i];
}


std::string const & Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
		return ;
	if (_floorCount < 100)
		_floor[_floorCount++] = _inventory[idx];
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}

std::string const & Character::checkInventory(int idx)
{
	return (_inventory[idx]->getType());
}
