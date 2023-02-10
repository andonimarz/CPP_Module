/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:19 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 13:34:05 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete (meta);
		delete (j);
		delete (i);
	}
	{
		std::cout << "------WrongAnimal------" << std::endl;
		const WrongAnimal* anim = new WrongAnimal();
		const WrongAnimal* k = new WrongCat();
		std::cout << k->getType() << " " << std::endl;
		k->makeSound(); //will output the WrongAnimal sound!
		anim->makeSound();
		delete (anim);
		delete (k);

		return (0);
	}
}