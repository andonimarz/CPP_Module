/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:00:12 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/04 11:35:58 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

//	If you want the data of an iterator, you can dereference it using the '*' operator.

//	The element pointed to by the end() iterator is not a valid element in the container
//		and should not be dereferenced. Instead, it serves as a sentinel value that marks 
//		the end of the range of elements in the container.

//	std::distance(it1, it2) algorithm will return the number of positions between its first and 
//		second argument. In this case between the first element and the iterator returned 
//		by our easyfind ft.

// std::find(begin(), end(), value) returns an iterator to the first coincidence if there is one.
//		If not it returns the end().

int main(void)
{
	std::cout << std::endl << "===== Test with an int vector =====" << std::endl;
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	printContainer(v);
	try {
		std::vector<int>::iterator it = easyfind(v, 1);
		std::cout << "Value " << *it << " found at position " << std::distance(v.begin(), it) << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try {
		std::vector<int>::iterator it = easyfind(v, 6);
	std::cout << "Value " << *it << " found at position " << std::distance(v.begin(), it) << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "===== Test with an int list =====" << std::endl;
	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	printContainer(l);
	try {
		std::list<int>::iterator it = easyfind(l, 3);
		std::cout << "Value " << *it << " found at position " << std::distance(l.begin(), it) << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try {
		std::list<int>::iterator it = easyfind(l, 6);
		std::cout << "Value " << *it << " found at position " << std::distance(l.begin(), it) << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "===== Test with an int set =====" << std::endl;
	std::list<int> s;
	s.push_back(1);
	s.push_back(2);
	s.push_back(3);
	s.push_back(4);
	s.push_back(5);
	printContainer(s);
	try {
		std::list<int>::iterator it = easyfind(s, 2);
		std::cout << "Value " << *it << " found at position " << std::distance(s.begin(), it) << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try {
		std::list<int>::iterator it = easyfind(s, 6);
		std::cout << "Value " << *it << " found at position " << std::distance(s.begin(), it) << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return (0);
}
