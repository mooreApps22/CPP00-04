#include <iostream>
#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
//	std::cout << "Default Ice Constructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	//std::cout << "Copy Ice Constructor called" << std::endl;
	*this = other;
}

Ice& Ice::operator=(const Ice& other)
{
	//std::cout << "Copy Assignment Ice Constructor called" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

Ice::~Ice() 
{
	//std::cout << "Ice Destructor called" << std::endl;
}

AMateria*	Ice::clone(void) const
{
	return new Ice(*this);
}
void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots a bolt of ice at " << target.getName() << " *" <<  std::endl;
}
