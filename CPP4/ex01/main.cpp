/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:19 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 13:28:00 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	int		len = 4;
	Animal *array[len];

	std::cout << "---- Generating array ----" << std::endl;
	for (int i = 0; i < len; i++)
	{
		if (i < (len / 2))
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	std::cout << "---- Destroying array ----" << std::endl;
	for (int i = 0; i < len; i++)
		delete array[i];
	std::cout << "---- Deep copy ----" << std::endl;
	std::cout << "Creating a cat" << std::endl;
	Cat cat1;
	std::cout << "Creating a clone of previous cat" << std::endl;
	Cat cat2(cat1);
	std::cout << "cat's address: " << &cat1 << std::endl;
	std::cout << "cat clone's address: " << &cat2 << std::endl;
	std::cout << "Creating a second clone of previous cat" << std::endl;
	Cat cat3 = cat1;
	std::cout << "cat's address: " << &cat1 << std::endl;
	std::cout << "cat second clone's address: " << &cat3 << std::endl;
	std::cout << "---- Destroying cat and clone ----" << std::endl;
}
