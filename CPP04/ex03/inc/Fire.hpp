
#pragma once
# include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Fire: public AMateria
{
    public:
        Fire();
			// Use their names ("ice" for Fire) to set their types. 
        Fire(const Fire& other);
        Fire& operator=(const Fire& other);
        ~Fire();

        virtual AMateria* clone(void) const;
			// return a new instance of Fire
		void	use(ICharacter& character); // outputs "* shoots an ice bolt at <name> *"

};
