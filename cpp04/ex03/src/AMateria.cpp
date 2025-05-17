#include <iostream>
#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"


AMateria::AMateria() : _type("Materia")
{
	//std::cout << "Default AMateria Constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type)
{
	//std::cout << "Default AMateria Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other) //  : *this(other)
{
	//std::cout << "Copy AMateria Constructor called" << std::endl;
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	//std::cout << "Copy Assignment AMateria Constructor called" << std::endl;
	if (this != &other)
		_type = other._type;
	return (*this);
}
/*
AMateria::~AMateria() 
{
	std::cout << "AMateria Destructor called" << std::endl;
}
*/
std::string	const & AMateria::getType(void) const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Use on " << target.getName() << std::endl;
}
