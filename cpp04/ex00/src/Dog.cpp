
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = other;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Default Destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Roof." << std::endl;
}
