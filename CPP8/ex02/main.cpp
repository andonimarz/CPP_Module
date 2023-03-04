/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:49:30 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/04 11:29:42 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.cpp"
#include <iostream>

int main()
{
	{
		std::cout << std::endl << "===== MutantStack<int> =====" << std::endl;
		MutantStack<int> mutantStack;
		mutantStack.push(1);
		mutantStack.push(2);
		mutantStack.push(3);
		mutantStack.push(4);

		// Test iterator functions
		std::cout << std::endl << "Iterator functions:" << std::endl;
		for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;;

		// Test reverse iterator functions
		std::cout << std::endl << "Reverse iterator functions:" << std::endl;;
		for (MutantStack<int>::reverse_iterator rit = mutantStack.rbegin(); rit != mutantStack.rend(); ++rit)
			std::cout << *rit << " ";
		std::cout << std::endl;

		// Test const iterator functions
		const MutantStack<int> constMutantStack = mutantStack;
		std::cout << std::endl << "Const iterator functions:" << std::endl;
		for (MutantStack<int>::const_iterator it = constMutantStack.begin(); it != constMutantStack.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;

		// Test const reverse iterator functions
		std::cout << std::endl << "Const reverse iterator functions:" << std::endl;
		for (MutantStack<int>::const_reverse_iterator rit = constMutantStack.rbegin(); rit != constMutantStack.rend(); ++rit)
			std::cout << *rit << " ";
		std::cout << std::endl;

		// Test std::stack functions
		std::cout << std::endl << "std::stack functions:" << std::endl;
		std::cout << "mutantStack.top() = " << mutantStack.top() << std::endl;
		std::cout << "mutantStack.size() = " << mutantStack.size() << std::endl;
		std::cout << "- * stack.pop() * -" << std::endl;
		mutantStack.pop();
		std::cout << "mutantStack.top() = " << mutantStack.top() << std::endl;
		std::cout << "mutantStack.size() = " << mutantStack.size() << std::endl;
		std::cout << "mutantStack.empty() = " << mutantStack.empty() << std::endl;
	}
	{
		std::cout << std::endl << "===== MutantStack<std::string> =====" << std::endl;
		MutantStack<std::string> mutantStack;
		mutantStack.push("UVA");
		mutantStack.push("MANZANA");
		mutantStack.push("NARANJA");
		mutantStack.push("PERA");

		// Test iterator functions
		std::cout << std::endl << "Iterator functions:" << std::endl;
		for (MutantStack<std::string>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;;

		// Test reverse iterator functions
		std::cout << std::endl << "Reverse iterator functions:" << std::endl;;
		for (MutantStack<std::string>::reverse_iterator rit = mutantStack.rbegin(); rit != mutantStack.rend(); ++rit)
			std::cout << *rit << " ";
		std::cout << std::endl;

		// Test const iterator functions
		const MutantStack<std::string> constMutantStack = mutantStack;
		std::cout << std::endl << "Const iterator functions:" << std::endl;
		for (MutantStack<std::string>::const_iterator it = constMutantStack.begin(); it != constMutantStack.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;

		// Test const reverse iterator functions
		std::cout << std::endl << "Const reverse iterator functions:" << std::endl;
		for (MutantStack<std::string>::const_reverse_iterator rit = constMutantStack.rbegin(); rit != constMutantStack.rend(); ++rit)
			std::cout << *rit << " ";
		std::cout << std::endl;

		// Test std::stack functions
		std::cout << std::endl << "std::stack functions:" << std::endl;
		std::cout << "mutantStack.top() = " << mutantStack.top() << std::endl;
		std::cout << "mutantStack.size() = " << mutantStack.size() << std::endl;
		std::cout << "- * stack.pop() * -" << std::endl;
		mutantStack.pop();
		std::cout << "mutantStack.top() = " << mutantStack.top() << std::endl;
		std::cout << "mutantStack.size() = " << mutantStack.size() << std::endl;
		std::cout << "mutantStack.empty() = " << mutantStack.empty() << std::endl;
	}
		return (0);
}
