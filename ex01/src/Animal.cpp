#include "../inc/Animal.hpp"

Animal::Animal() : _type("Just an animal")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal Parameter Constructor called" << std::endl;
	_type = type;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = other;
}

Animal&	Animal::operator=(const Animal& other)
{
	std::cout << "Animal Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Default Destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "makes sound." << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}
/*
Brain*	Animal::getBrain() const
{
	return (_brain);
}
*/
