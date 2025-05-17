#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "..." << std::endl;

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();

	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound();
	wmeta->makeSound();

	std::cout << "..." << std::endl;

	std::cout << j->getType() << " goes "; 
	j->makeSound();
	std::cout << i->getType() << " goes "; 
	i->makeSound();

	std::cout << "..." << std::endl;
	delete i;
	delete j;
	delete meta;

	delete wi;
	delete wmeta;
	return (0);
}
