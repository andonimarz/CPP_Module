/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:42 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/27 12:58:47 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

//An example of a function for ::iter that prints the param
template <typename T>
void	print(const T value)
{
	std::cout << value << " ";
}

//An example of a function that modifies the given param
template <typename T>
void add_one(T& x)
{
    x += 1;
}

// Function that works with arrays of multiple data types
// Params:
// 1. The address of an array. 
// 2. The length of the given array. 
// 3. A function pointer
template <typename T>
void iter(T* array, int length, void (*func)(T &))
{
	for (int i = 0; i < length; i++)
		func(array[i]);
}

#endif