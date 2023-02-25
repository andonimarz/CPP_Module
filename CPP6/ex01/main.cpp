/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:11 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/25 11:21:24 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int	main(void)
{
	std::cout << std::endl << "===== CREATION =====" << std::endl;
	Data data;
	data.i = 100;
	data.c = 'a';

	std::cout << "Data 'data' struct created" << std::endl 
				<< "data.int = " << data.i << " and data.c = '" << data.c << "'."  << std::endl;

	uintptr_t raw = 0;
	std::cout << std::endl << "uintptr_t 'raw' created" << std::endl
				<< "raw = " << raw << std::endl;

	raw = serialize(&data);
	std::cout << std::endl << "___ raw = serialize(&data) ___" << std::endl
				<< "raw = " << raw << std::endl << std::endl;

	std::cout << "===== ADDRESS COMP. =====" << std::endl
				<< "&data = " << &data << std::endl
				<< "&raw = " << &raw << std::endl;
	
	std::cout << std::endl << "===== Data *ptr =====" << std::endl;
	Data *ptr = NULL;
	std::cout << "Data* 'ptr' struct created" << std::endl;
	std::cout << "ptr =	" << ptr << std::endl;

	ptr = deserialize(raw);
	std::cout << std::endl << "___ ptr = deserialize(raw) ___" << std::endl
				<< "ptr->int = " << ptr->i << " and ptr->c = '" << ptr->c << "'."  << std::endl;

	std::cout << std::endl << "===== ADDRESS COMP. =====" << std::endl
				<< "&data =	" << &data << std::endl
				<< "ptr =	" << ptr << std::endl;
}
