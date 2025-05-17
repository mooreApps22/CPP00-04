#pragma once
# include <iostream>
# include "Cat.hpp"
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal 
{
	private:
		std::string	_type; // maybe redundant
		Brain*		_brain;
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();
		void	makeSound(void) const;
		Brain*	getBrain(void) const;
};
