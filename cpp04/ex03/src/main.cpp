#include <iostream>
#include "../inc/AMateria.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Fire.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Banana.hpp"
#include "../inc/Melon.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"
#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"

void	equipCreatedMateria(ICharacter* character, AMateria* materia, IMateriaSource* src, std::string spell)
{
	materia = src->createMateria(spell);
	if (!materia )
		std::cerr << "Failed to create " << spell << " materia" << std::endl;
	character->equip(materia);
}


int	main(void)
{
/*
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	
*/
	IMateriaSource* src = new MateriaSource();
	ICharacter* cloud = new Character("Cloud");
	ICharacter* tifa = new Character("Tifa");
	ICharacter* bad_guy = new Character("the Monster");
	AMateria* tmp_materia = NULL;

	src->learnMateria(new Ice());
	src->learnMateria(new Melon());
	src->learnMateria(new Fire());
	src->learnMateria(new Banana());

	equipCreatedMateria(cloud, tmp_materia, src, "ice");
	equipCreatedMateria(cloud, tmp_materia, src, "melon");
	equipCreatedMateria(cloud, tmp_materia, src, "fire");
	equipCreatedMateria(cloud, tmp_materia, src, "banana");

	for (int i = 0; i < 4; i++)
	{
		if (cloud->checkInventory(i) == "cure")
			cloud->use(i, *tifa);	
		else
			cloud->use(i, *bad_guy);	
	}
	
	delete bad_guy;
	delete tifa;
	delete cloud;
	delete src;

	return 0;
}
