#include <iostream>
#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
//	std::cout << "Default Cure Constructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	//std::cout << "Copy Cure Constructor called" << std::endl;
	*this = other;
}

Cure& Cure::operator=(const Cure& other)
{
	//std::cout << "Copy Assignment Cure Constructor called" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

Cure::~Cure() 
{
	//std::cout << "Cure Destructor called" << std::endl;
}

AMateria*	Cure::clone(void) const
{
	return new Cure(*this);
}
void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" <<  std::endl;
}
