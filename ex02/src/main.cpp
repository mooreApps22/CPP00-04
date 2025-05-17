#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int	main(void)
{
	const Dog* j = new Dog();
	const Cat* i = new Cat();
	Animal a;

	std::cout << "..." << std::endl;
	std::cout << "..." << std::endl;

	std::cout << std::endl;
	j->getBrain()->setIdea(0, "All dogs go to heaven.");
	std::cout << j->getBrain()->getIdea(0) << std::endl;

	std::cout << "..." << std::endl;
	std::cout << "..." << std::endl;

	delete i;
	delete j;

	std::cout << "..." << std::endl;
	std::cout << "..." << std::endl;

	return (0);
}
