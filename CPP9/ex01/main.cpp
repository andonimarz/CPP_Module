/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:26:12 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/30 12:35:20 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error" << std::endl;
	else
	{
		std::string str = argv[1];
		try
		{
			if (str.size() == 0)
				throw std::invalid_argument("Error");
			str = formatStr(str);
			std::cout << rpnJob(str) << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
