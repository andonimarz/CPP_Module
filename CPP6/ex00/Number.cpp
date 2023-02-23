/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:11 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/23 17:25:12 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

Number::Number()
{
	//std::cout << "Number constructor" << std::endl;
}

Number::Number(char *str) : _str(str)
{
	if (strlen(str) == 1)
	{
		if (str[0] >= '0' && str[0] <= '9')
			_num = static_cast<char>(std::atoi(str));
		else
			_num = str[0];
	}
	else if (isValid(str))
		_num = std::stod(str);
	else
		throw InvalidArgs();
	//std::cout << "Number constructor" << std::endl;
}

Number::Number(const Number &src) : _str(src.getStr()), _num(src.getNum())
{
	//std::cout << "Number copy constructor" << std::endl;
}

Number::~Number()
{
	//std::cout << "Number destructor" << std::endl;
}

Number &Number::operator=(const Number &src)
{
	if (this != &src)
		this->_str = src.getStr();
		this->_num = src.getNum();
	return (*this);
}

char	*Number::getStr(void) const
{
	return (this->_str);
}

double	Number::getNum(void) const
{
	return (this->_num);
}

void	Number::toChar(void) const
{
	if (_num == std::numeric_limits<float>::infinity()
		|| _num == -std::numeric_limits<float>::infinity()
		|| std::isnan(_num))
		throw Impossible();
	if (_num < 32 || _num > 126)
		throw NonDisplayable();
	std::cout << "'" << static_cast<char>(_num) << "'" << std::endl;
}

void		Number::toInt(void) const
{
	if (_num == std::numeric_limits<float>::infinity()
		|| _num == -std::numeric_limits<float>::infinity()
		|| std::isnan(_num))
		throw Impossible();
	std::cout << static_cast<int>(_num) << std::endl;
}

void	Number::toFloat(void) const
{
		float f = static_cast<float>(_num);
	if (f - (int)f != (float)0)
		std::cerr << f << "f" << std::endl;
	else
		std::cerr << f << ".0f" << std::endl;
}

void	Number::toDouble(void) const
{
	double d = static_cast<double>(_num);
	if (d - (int)d != (double)0)
		std::cout << d << std::endl;
	else
		std::cout << d << ".0" << std::endl;
}

std::ostream	&operator<<( std::ostream &ost, Number const &nb)
{
	ost << "Number: " << nb.getNum() << ", str: " << nb.getStr() << std::endl;
	return (ost);
}

bool isValid(const std::string& str)
{
	int	dotCount = 0;

	if (str == "inf" || str == "inff" || str == "-inf" ||
		str == "-inff" || str == "nan" || str == "nanf")
		return true;
	for (int i = 0; str[i] ; i++)
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			i++;
		if (!std::isdigit(str[i]) && str[i] != '.'
			&& !(str[i] == 'f' && (i == str.size() - 1)))
			return false;
		if (str[i] == '.')
		{
			dotCount++;
			if (dotCount > 1)
				return false;
		}
	}
	return true;
}
