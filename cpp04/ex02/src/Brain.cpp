
#include "../inc/Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Empty idea.";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout << "Brain Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Default Destructor called" << std::endl;
}

void	Brain::setIdea(int i, const std::string& idea)
{
	if (i >= 0 && i < 100)
		_ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (_ideas[i]);
	return ("");
}
