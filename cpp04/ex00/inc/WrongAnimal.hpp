#pragma once
# include <iostream>

class WrongAnimal 
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		~WrongAnimal();
		void makeSound(void) const;
		std::string	getType(void) const;
};
