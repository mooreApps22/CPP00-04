#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Just the wrong animal")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = other;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default Destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "makes wrong sound." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}
