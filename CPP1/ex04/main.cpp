/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:56:36 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/03 13:57:13 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Info.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: invalid args. (./exec filename s1 s2)" << std::endl;
		return (0);
	}
	Info info(argv);
	info.job();
	return (0);
}
