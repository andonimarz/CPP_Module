/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:11 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/24 15:47:19 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
    std::srand(std::time(0));
	int	random = std::rand() % 3;
    if (random == 0)
        return (new A());
    else if (random == 1)
        return (new B());
    else
        return (new C());
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
	else
		std::cout << "NULL" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (const std::bad_cast &e)
	{
		try
		{
			B	&b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "B" << std::endl;
		}
		catch (const std::bad_cast &e)
		{
			try
			{
				C	&c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "C" << std::endl;
			}
			catch (const std::bad_cast &e)
			{
				std::cout << "NULL" << std::endl;
			}
		}
	}
}

int	main(void)
{
	std::cout << "===== Generating a Base *ptr =====" << std::endl;
	Base	*ptr = NULL;

	std::cout << std::endl << "===== ptr = NULL =====" << std::endl;
	identify(ptr);
	identify(*ptr);

	std::cout << std::endl << "===== ptr = generate() =====" << std::endl;
	ptr = generate();
	identify(ptr);
	identify(*ptr);

	delete (ptr);
	return (0);
}
