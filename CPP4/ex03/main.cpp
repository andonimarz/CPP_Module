/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 12:03:25 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

/* int main()
{
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
	return 0;
} */

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp;

	std::cout << "------ Part 1 ------" << std::endl;
	//Fill source's inventory
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	//Error: source's inventory full
	std::cout << "Source: Trying to equip a 5th materia" << std::endl;
	tmp = new Ice();
	src->learnMateria(tmp);
	delete tmp;

	//Fill character's inventory
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	//Error: inventory full
	std::cout << "Character: Trying to equip a 5th materia" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;

	//Use materias
	std::cout << "Character: using materias" << std::endl;
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);
	
	//Unequip
	std::cout << "Character: Trying to use a unequiped materia" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(0);
	me->use(0, *bob);
	delete tmp;
	delete me;

	std::cout << "------ Part 2 ------" << std::endl;
	Character char1("Timmy");
	tmp = src->createMateria("ice");
	char1.equip(tmp);
	tmp = src->createMateria("ice");
	char1.equip(tmp);
	tmp = src->createMateria("cure");
	char1.equip(tmp);
	tmp = src->createMateria("cure");
	char1.equip(tmp);
	
	//Deep copy
	Character char2(char1);
	Character char3("Tommy");
	char3 = char2;
	//Use materias
	std::cout << char1.getName() << " (char1) uses materias:" << std::endl;
	for (int i = 0; i < 4; i++)
		char1.use(i, *bob);
	std::cout << char1.getName() << " (char1) tries again to use materias:" << std::endl;
	char1.use(0, *bob);
	std::cout << char2.getName() << " (char2, char1's deep clone) uses materias:" << std::endl;
	for (int i = 0; i < 4; i++)
		char2.use(i, *bob);
	std::cout << char1.getName() << " (char2) tries again to use materias:" << std::endl;
	char2.use(0, *bob);
	std::cout << char2.getName() << " (char3, char2's deep clone) uses materias:" << std::endl;
	for (int i = 0; i < 4; i++)
		char3.use(i, *bob);
	delete bob;
	delete src;
	return 0;
}
