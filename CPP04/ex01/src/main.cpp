#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

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

	const size_t size = 4;
	Animal* animals[size];

	for (int index = 0; index < size; index++)
		if (index < size / 2)
			animals[index] = new Dog();
		else
			animals[index] = new Cat();
	
	std::cout << "^^^" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "^^^" << std::endl;

	std::cout << "..." << std::endl;
	std::cout << "..." << std::endl;
	animals[0]->getBrain()->setIdea(0, "I think, therefore... treats!!!");
	animals[1]->getBrain()->setIdea(0, "All the ball things.");
	animals[2]->getBrain()->setIdea(0, "Meow meow meow.");
	animals[3]->getBrain()->setIdea(0, "Stupid humans.");
	std::cout << animals[0]->getBrain()->getIdea(0) << std::endl;
	std::cout << animals[1]->getBrain()->getIdea(0) << std::endl;
	std::cout << animals[2]->getBrain()->getIdea(0) << std::endl;
	std::cout << animals[3]->getBrain()->getIdea(0) << std::endl;

	std::cout << "..." << std::endl;
	std::cout << "..." << std::endl;

	for (int index = 0; index < size; index++)
		delete animals[index];
	return (0);
}
