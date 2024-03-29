/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:56:12 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/03 13:56:14 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Info.hpp"

Info::Info(char **argv) : _inFile(argv[1]), _find(argv[2]), _replace(argv[3])
{
	this->_outFile = this->_inFile + ".replace";
}
Info::~Info()
{
}

void	Info::job(void)
{
	size_t		coin = 0;

	std::ifstream	ifs(this->_inFile);
	if (!ifs.is_open())
		std::cerr << "Error: invalid file" << std::endl;
	else
	{
		std::getline(ifs, this->_str, '\0');
		if (this->_str.empty())
			std::cerr << "Error: empty file" << std::endl;
		else
		{
			coin = this->_str.find(_find, coin);
			while (coin <= this->_str.length())
			{
				this->_str.erase(coin, this->_find.length());
				this->_str.insert(coin, this->_replace);
				coin += _replace.length();
				coin = this->_str.find(_find, coin);
			}
			std::ofstream	ofs(this->_outFile);
			ofs << this->_str;
			ofs.close();
		}
	}
	ifs.close();
}
