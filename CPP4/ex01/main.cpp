/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:19 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 14:09:39 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal *animal_array[4];

	std::cout << "---- Generating array ----" << std::endl;
	for (int i=0; i<=3; i++)
	{
		if (i < 2)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}
	std::cout << "---- Destroying array ----" << std::endl;
	
	for (int i=0; i<=3; i++)
	{
		delete animal_array[i];
	}

	std::cout << std::endl << std::endl << std::endl;
	Cat cat1;
	Cat cat2;

	cat2 = cat1;
	std::cout << "cat 1 memory: " << &cat1 << std::endl;
	std::cout << "cat 2 memory: " << &cat2 << std::endl;
}
