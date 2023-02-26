/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:42 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/26 19:15:18 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	print(T &value)
{
	std::cout << value << " ";
}

template <typename T>
void iter(T* array, int length, void (*func)(T&))
{
	for (int i = 0; i < length; i++)
		func(array[i]);
}

#endif