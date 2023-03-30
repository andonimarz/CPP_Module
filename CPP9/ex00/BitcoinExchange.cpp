/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:01:30 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/30 10:29:04 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string fileName)
{
	std::ifstream file(fileName);
	if (!file.good())
		std::cerr << "Error: invalid csv file" << std::endl;
	
	std::string line;
	
	while (getline(file, line))
	{
		// Split the line into date and amount
		std::string date = line.substr(0, line.find(','));
		std::string value = line.substr(line.find(',') + 1);
		if (date == "date")
			continue;
		if (!checkDate(date, 0) || !isNumeric(value, 0))
		{
			file.close();
			_data.clear();
			std::cout << "Error: bad csv file" << std::endl;
			exit(0);
		}
		double amount = std::atof(value.c_str());
		
		// Store the data in the map
		_data[date] = amount;
	}
	if (_data.size() == 0)
	{
		file.close();
		_data.clear();
		std::cout << "Error: empty csv file" << std::endl;
		exit(0);
	}
	file.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &ref)
{
	*this = ref;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
	if (this != &src)
		_data = src.getData();
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
	_data.clear();
}

std::map<std::string, double> BitcoinExchange::getData() const
{
	return _data;
}

void BitcoinExchange::printData() const
{
	for (std::map<std::string, double>::const_iterator it = _data.begin(); it != _data.end(); ++it)
		std::cout << it->first << ": " << it->second << "\n";
}

int BitcoinExchange::checkDate(std::string date, int mode) const
{
	std::istringstream iss(date);
	std::string year, month, day;
	double num;
	
	if (mode == 1 && date < this->_data.begin()->first)
		return 0;
	std::getline(iss, year, '-');
	if (year.length() != 4  || !isNumeric(year, 1))
		return 0;
	num = atof(year.c_str());
	if (num < 2009)
		return 0;

	std::getline(iss, month, '-');
	if (month.length() != 2  || !isNumeric(month, 1))
		return 0;
	num = atof(month.c_str());
	if (num < 1 || num > 12)
		return 0;

	std::getline(iss, day, ' ');
	if (day.length() != 2  || !isNumeric(day, 1))
		return 0;	
	num = atof(day.c_str());
	if (num < 1 || num > 31)
		return 0;

	return 1;
}

double BitcoinExchange::exchange(std::string date, double value) const
{
	std::string index;

	index = findDate(date);
	// std::cout << "(used date: " << index << ")";
	return this->_data.find(index)->second * value;
}

std::string BitcoinExchange::findDate(const std::string &date) const
{
	std::map<std::string, double>::const_iterator begin = this->_data.begin();
	std::map<std::string, double>::const_iterator end = this->_data.end();
	std::string result = begin->first;
	
	while (begin != end)
	{
		if (begin->first > date)
			return result;
		result = begin->first;
		begin++;
	}
	return result;
}

bool isNumeric(const std::string& str, int mode) 
{
	int count = 0;
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
	{
		if (mode == 0)
		{
			if ( *it == '.')
				count++;
			if ((!isdigit(*it) && *it != '.') || count > 1)
				return false;
		}
		if (mode == 1 && !isdigit(*it))
			return false;
	}
	return true;
}

int checkNum(double number)
{
	if (number < 0) 
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return 0;
	}
	if (number > 1000) 
	{
		std::cerr << "Error: too large a number." << std::endl;
		return 0;
	}
	return 1;
}
