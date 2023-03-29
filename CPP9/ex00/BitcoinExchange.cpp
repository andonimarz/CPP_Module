/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:01:30 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/29 10:23:27 by amarzana         ###   ########.fr       */
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
		if (date == "date")
			continue;
		double amount = std::atof(line.substr(line.find(',') + 1).c_str());
		
		// Store the data in the map
		_data[date] = amount;
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
	std::map<std::string, double>::const_iterator it = _data.begin();
	for (it; it != _data.end(); ++it)
		std::cout << it->first << ": " << it->second << "\n";
}

int BitcoinExchange::checkDate(std::string date) const
{
	std::istringstream iss(date);
	std::string year, month, day;
	double num;

	if (date < this->_data.begin()->first)
		return 0;
	std::getline(iss, year, '-');
	if (year.length() != 4  || !isNumeric(year))
		return 0;
	num = atof(year.c_str());
	if (num < 2009)
		return 0;

	std::getline(iss, month, '-');
	if (month.length() != 2  || !isNumeric(month))
		return 0;
	num = atof(month.c_str());
	if (num < 1 || num > 12)
		return 0;

	std::getline(iss, day, ' ');
	if (day.length() != 2  || !isNumeric(day))
		return 0;	
	num = atof(day.c_str());
	if (num < 1 || num > 31)
		return 0;

	//std::cout << "Year: " << year << ", month: " << month << ", day: " << day << std::endl;

	return 1;
}

double BitcoinExchange::exchange(std::string date, double value) const
{
	std::string index;

	index = findDate(date);
	//std::cout <<"(INDEX = " << index << ") ";
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

bool isNumeric(const std::string& str) 
{
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
		if (!isdigit(*it))
			return false;
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
