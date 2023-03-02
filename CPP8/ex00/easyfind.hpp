/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:00:40 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/02 10:43:24 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// Custom exception that prints the error msg
class ValueNotFoundException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Value not found in container";
	}
};

// Custom template that prints every element in a container
template<typename Container>
void printContainer(const Container& c) {
	typename Container::const_iterator it;
	for (it = c.begin(); it != c.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

// Finds a coincidence and returns an iterator to it.
template<typename Container>
typename Container::iterator easyfind(Container &container, int value)
{
typename Container::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw ValueNotFoundException();
	return (it);
}
