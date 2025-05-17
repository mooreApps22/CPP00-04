#pragma once
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	private:
		std::string	_type;
	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();
		void makeSound(void) const;
};
