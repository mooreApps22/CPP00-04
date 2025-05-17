
#pragma once
# include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
    public:
        Ice();
			// Use their names ("ice" for Ice) to set their types. 
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        ~Ice();

        virtual AMateria* clone(void) const;
			// return a new instance of Ice
		void	use(ICharacter& character); // outputs "* shoots an ice bolt at <name> *"

};
