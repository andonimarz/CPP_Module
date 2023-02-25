/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:00 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/25 09:29:56 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string aux = argv[1];
		try
		{
			Number nb(aux);

			std::cout << "Char: ";
			try	{
				nb.toChar();
			}
			catch(const std::exception& e)	{
				std::cerr << e.what() << std::endl;
			}

			std::cout << "Int: ";
			try	{
				nb.toInt();
			}
			catch(const std::exception& e)	{
				std::cerr << e.what() << std::endl;
			}

			std::cout << "Float: ";
			try	{
				nb.toFloat();
			}
			catch(const std::exception& e)	{
				std::cerr << e.what() << std::endl;
			}

			std::cout << "Double: ";
			try	{
				nb.toDouble();
			}
			catch(const std::exception& e)	{
				std::cerr << e.what() << std::endl;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "Error: invalid args" << std::endl;
	return (0);
}
