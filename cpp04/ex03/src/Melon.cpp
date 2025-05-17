
#include <iostream>
#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Melon.hpp"

Melon::Melon() : AMateria("banana")
{
//	std::cout << "Default Melon Constructor called" << std::endl;
}

Melon::Melon(const Melon& other) : AMateria(other)
{
	//std::cout << "Copy Melon Constructor called" << std::endl;
	*this = other;
}

Melon& Melon::operator=(const Melon& other)
{
	//std::cout << "Copy Assignment Melon Constructor called" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

Melon::~Melon() 
{
	//std::cout << "Melon Destructor called" << std::endl;
}

AMateria*	Melon::clone(void) const
{
	return new Melon(*this);
}
void	Melon::use(ICharacter& target)
{
	std::cout << "* throws a melon at " << target.getName() << " *" <<  std::endl;
}
