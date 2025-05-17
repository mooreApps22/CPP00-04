#pragma once
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
    private:
		std::string	_name;
		AMateria*	_inventory[4];
		AMateria*	_floor[100];
		int			_floorCount;
    public:
        Character();
        Character(std::string const& name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character();

		std::string const & getName(void) const;
		std::string const & checkInventory(int idx);
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};
