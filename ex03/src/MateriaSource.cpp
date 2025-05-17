#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/AMateria.hpp"

MateriaSource::MateriaSource(void)
{
    //std::cout << "MateriaSource Default Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) 
{
   // std::cout << "MateriaSource Copy Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = other._materias[i] ? other._materias[i]->clone() : NULL;
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
 //   std::cout << "MateriaSource Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
		for (int i = 0; i < 4; i++)
		{
			if (_materias[i])
				delete _materias[i];
			_materias[i] = other._materias[i] ? other._materias[i]->clone() : NULL;
		}
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
//    std::cout << "MateriaSource Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_materias[i])
			delete _materias[i];

}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for(int i = 0; i < 4; i++)
	{
		if (_materias[i])
		{
			if (_materias[i]->getType() == type)
				return (_materias[i]->clone());
		}
	}
	return (NULL);
}
