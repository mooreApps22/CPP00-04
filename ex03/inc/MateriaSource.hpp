#pragma once
# include <iostream>
# include "IMateriaSource.hpp" 
#include "AMateria.hpp"

/*
	MateriaSource must be able to learn "templates" of Materias to create them when needed.
	It can generate a new Materia using just a string that identifies its type.
*/

class MateriaSource : public IMateriaSource
{
    private:
		AMateria*	_materias[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource();

		void		learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const & type);
};
