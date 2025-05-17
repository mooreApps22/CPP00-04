#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : _type("WrongCat")
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default Destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meow." << std::endl;
}
