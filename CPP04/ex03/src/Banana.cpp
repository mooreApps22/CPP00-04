#include <iostream>
#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Banana.hpp"

Banana::Banana() : AMateria("banana")
{
//	std::cout << "Default Banana Constructor called" << std::endl;
}

Banana::Banana(const Banana& other) : AMateria(other)
{
	//std::cout << "Copy Banana Constructor called" << std::endl;
	*this = other;
}

Banana& Banana::operator=(const Banana& other)
{
	//std::cout << "Copy Assignment Banana Constructor called" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

Banana::~Banana() 
{
	//std::cout << "Banana Destructor called" << std::endl;
}

AMateria*	Banana::clone(void) const
{
	return new Banana(*this);
}
void	Banana::use(ICharacter& target)
{
	std::cout << "* throws a banana at " << target.getName() << " *" <<  std::endl;
}
