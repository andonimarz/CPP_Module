/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:00 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 18:29:26 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(int grade)
{
	std::cout << "Bureaucrat constructor" << std::endl;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
	{
		this->_grade = src.getGrade();
		this->_name = src.getName();
	}
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::increment(void)
{
	if ((this->_grade - 1) >= 1 &&  (this->_grade - 1) <= 150)
		this->_grade--;
}

void	Bureaucrat::decrement(void)
{
	if ((this->_grade + 1) >= 1 &&  (this->_grade + 1) <= 150)
		this->_grade++;
}

std::ostream	&operator<<( std::ostream &ost, Bureaucrat const &b)
{
	ost << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (ost);
}