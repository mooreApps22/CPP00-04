#pragma once
# include <iostream>
# include "AMateria.hpp" 

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}

		virtual void		learnMateria(AMateria*) = 0;
			/*
				Copies Materia parameter and stores it, so it can be cloned later.
				They can know at most 4 Materia and they do not have to be unique.
			*/
        virtual AMateria*	createMateria(std::string const & type) = 0;
			/*
				Returns a new Materia.
				It copies preiously learned MateriaSource (concrete I'm assuming.)
					whose type equals the one passed as parameter.
				Returns 0 is the type is unknown.
			*/
};
