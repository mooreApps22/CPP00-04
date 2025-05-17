#include <iostream>
#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Fire.hpp"

Fire::Fire() : AMateria("fire")
{
//	std::cout << "Default Fire Constructor called" << std::endl;
}

Fire::Fire(const Fire& other) : AMateria(other)
{
	//std::cout << "Copy Fire Constructor called" << std::endl;
	*this = other;
}

Fire& Fire::operator=(const Fire& other)
{
	//std::cout << "Copy Assignment Fire Constructor called" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

Fire::~Fire() 
{
	//std::cout << "Fire Destructor called" << std::endl;
}

AMateria*	Fire::clone(void) const
{
	return new Fire(*this);
}
void	Fire::use(ICharacter& target)
{
	std::cout << "* torches " << target.getName() << " *" <<  std::endl;
}
