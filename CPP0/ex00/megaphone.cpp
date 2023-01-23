/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:53:59 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/23 15:27:00 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int j;

	j = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				argv[j][i] = std::toupper(argv[j][i]);
				std::cout << argv[j][i];
				i++;
			}
			j++;
		}
	}
	std::cout << std::endl;
	return 0;
}