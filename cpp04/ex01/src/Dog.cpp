
#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"
#include "../inc/Dog.hpp"
Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default Constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	_brain = new Brain(*other._brain); //deep
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		_type = other._type;
		if (_brain)
			_brain = new Brain(*other._brain); //deep
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Default Destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Roof." << std::endl;
}

Brain*	Dog::getBrain() const
{
	return (_brain);
}
