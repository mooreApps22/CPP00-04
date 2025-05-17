
#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = other;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Default Destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow." << std::endl;
}
