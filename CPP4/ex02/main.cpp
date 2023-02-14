/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:19 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 13:35:04 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "Creating a Dog" << std::endl;
	Animal *animal = new Dog();
	animal->makeSound();
	delete animal;
	std::cout << "-------------------------" << std::endl;
	std::cout << "Creating a Cat" << std::endl;
	animal = new Cat();
	animal->makeSound();
	delete animal;
	/* std::cout << "-------------------------" << std::endl;
	std::cout << "Creating an Animal" << std::endl;
	animal = new Animal();		//Error msg: An abstract class object isn't allowed.
	animal->makeSound();		//Now Animal::makeSound() is pure virtual because of = 0 !!!
	delete animal; */
}
