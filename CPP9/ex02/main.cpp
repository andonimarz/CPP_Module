/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:59:43 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/29 16:28:02 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "Error" << std::endl;
	else
	{
		try
		{
			PmergeMe pm(argv);
			std::cout << "Before: ";
			pm.printVec();
			pm.algorithm();
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}