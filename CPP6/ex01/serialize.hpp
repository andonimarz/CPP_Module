/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 11:19:50 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/25 11:21:16 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>

struct Data
{
	int i;
	char c;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif