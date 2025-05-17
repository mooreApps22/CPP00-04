#pragma once
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string	_type;
		Brain*		_brain;
	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();
		void	makeSound(void) const;
		Brain*	getBrain(void) const;
};
