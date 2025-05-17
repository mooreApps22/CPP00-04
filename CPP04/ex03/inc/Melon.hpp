
#pragma once
# include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Melon: public AMateria
{
    public:
        Melon();
			// Use their names ("ice" for Melon) to set their types. 
        Melon(const Melon& other);
        Melon& operator=(const Melon& other);
        ~Melon();

        virtual AMateria* clone(void) const;
			// return a new instance of Melon
		void	use(ICharacter& character); // outputs "* shoots an ice bolt at <name> *"

};
