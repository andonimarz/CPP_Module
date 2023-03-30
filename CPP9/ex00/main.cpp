/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:23:09 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/30 10:24:50 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	// Checking the arg num
	if (!argv[1])
		return (std::cerr << "Error: missing input file" << std::endl, 1);
	if (argc != 2)
		return (std::cerr << "Error: Too many arguments" << std::endl, 1);
	
	// Creating the BitcoinExchange object
	BitcoinExchange data("data.csv");
	// Opening the input file and checking it
	std::string input = argv[1];
	std::ifstream file(input);

	if (!file.is_open())
		return (std::cerr << "Error: File not found" << std::endl, 1);
	else
	{
		std::string line;
		while (std::getline(file, line))
		{
			// Checking if the line has "|" and if it is empty
			int count = 0;
			for (size_t i = 0; i < line.size(); i++)
				if (line[i] == '|')
					count++;
			if (count != 1 || line.empty())
			{
				std::cerr << "Error: bad input => " << line << std::endl;
				continue;
			}

			//Taking the line as a stream
			std::istringstream iss(line);
			std::string date, value;

			// Getting the date and checking it
			std::getline(iss, date, '|');
			if (date == "date ")
				continue;
			if (!data.checkDate(date, 1))
			{
				std::cerr << "Error: bad input => " << line << std::endl;
				continue;
			}
			
			// Getting the value and checking it
			std::getline(iss, value, '|');
			if (value.empty())
			{
				std::cerr << "Error: bad input => " << date << std::endl;
				continue;
			}
			double number = std::atof(value.c_str());
			if (!checkNum(number))
				continue;
			
			// Printing the result
			std::cout << date << "=> " << number << " = " << data.exchange(date, number) << std::endl;
		}
	}
	return 0;
}
