
#pragma once
# include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Banana: public AMateria
{
    public:
        Banana();
			// Use their names ("ice" for Banana) to set their types. 
        Banana(const Banana& other);
        Banana& operator=(const Banana& other);
        ~Banana();

        virtual AMateria* clone(void) const;
			// return a new instance of Banana
		void	use(ICharacter& character); // outputs "* shoots an ice bolt at <name> *"

};
