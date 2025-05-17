
#pragma once
# include <iostream>
# include "AMateria.hpp" 
# include "ICharacter.hpp" 


class Cure: public AMateria
{
    public:
        Cure();
			// Use their names ("cure" for Cure) to set their types. 
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        ~Cure();

		
		virtual AMateria* clone(void) const;
			// return a new instance of Cure
		void	use(ICharacter& character); // outputs "* heals <name>s wounds *"

};
