
#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"
#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default Constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	_brain = new Brain(*other._brain); // deeeeep
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		_type = other._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain); // deeeeep
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Default Destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow." << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (_brain);
}
