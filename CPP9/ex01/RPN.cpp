/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:26:18 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/30 12:49:29 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::string formatStr(std::string str)
{
	std::string s = "0123456789 +-/*";

	for (size_t i = 0; i < str.size(); i++)
	{
		if (s.find(str[i]) != std::string::npos)
		{
			if (str[i] == ' ')
			{
				str.erase(i, 1);
				i--;
			}
		}
		else
			throw std::out_of_range("Error");
	}
	return str;
}

int rpnJob(std::string str)
{
	std::stack<int> stack;

	for (size_t i = 0; i < str.size(); i++)
	{
		if(isdigit(str[i]))
			stack.push(str[i] - '0');
		else
		{
			if (stack.size() <= 1)
				throw std::out_of_range("Error");
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();

			switch (str[i])
            {
				case '+':
					stack.push(a + b);
					break;
				case '-':
					stack.push(a - b);
					break;
				case '*':
					stack.push(a * b);
					break;
				case '/':
					if (b == 0)
						throw std::out_of_range("Error");
					stack.push(a / b);
					break;
            }
		}
	}
	if (stack.size() > 1)
		throw std::out_of_range("Error");
	return stack.top();
}
