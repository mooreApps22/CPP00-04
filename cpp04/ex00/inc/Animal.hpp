
#pragma once

# include <iostream>

class Animal 
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};


