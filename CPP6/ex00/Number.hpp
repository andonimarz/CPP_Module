/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:11 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/23 16:17:05 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_HPP
# define NUMBER_HPP

#include <iostream>
#include <cstring>
#include <iomanip>
#include <limits>
# include <cmath>

class	Number
{
	private:
		char	*_str;
		double	_num;

	public:
		Number();
		Number(char *str);
		Number(const Number &src);
		~Number();
		Number	&operator=(const Number &src);
		char	*getStr(void) const;
		double	getNum(void) const;
		void	toChar(void) const;
		void	toInt(void) const;
		void	toFloat(void) const;
		void	toDouble(void) const;

	class Impossible : public std::exception
	{
		const char *what() const throw()
		{
			return ("Impossible");
		}
	};

	class NonDisplayable : public std::exception
	{
		const char *what() const throw()
		{
			return ("Non displayable");
		}
	};

	class InvalidArgs : public std::exception
	{
		const char *what() const throw()
		{
			return ("Error: invalid args");
		}
	};
};

std::ostream	&operator<<(std::ostream &ost, Number const &nb);
bool			isValid(const std::string& str);

#endif