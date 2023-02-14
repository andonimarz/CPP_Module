/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:19 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 13:15:21 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		const Animal* anim = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound(); //will output the cat sound!
		dog->makeSound();
		anim->makeSound();
		delete (anim);
		delete (dog);
		delete (cat);

		std::cout << "------WrongAnimal------" << std::endl;
		const WrongAnimal* wanim = new WrongAnimal();
		const WrongAnimal* wcat = new WrongCat();
		std::cout << wcat->getType() << " " << std::endl;
		wcat->makeSound(); //will output the WrongAnimal sound!
		wanim->makeSound();
		delete (wanim);
		delete (wcat);
		return (0);
	}
}