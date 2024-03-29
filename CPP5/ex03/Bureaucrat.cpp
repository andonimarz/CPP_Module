/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:00 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/22 10:24:39 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("No name"), _grade(150)
{
	std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade())
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		this->_grade = src.getGrade();
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

void	Bureaucrat::incGrade(void)
{
	if ((this->_grade - 1) >= 1 &&  (this->_grade - 1) <= 150)
		this->_grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decGrade(void)
{
	if ((this->_grade + 1) >= 1 &&  (this->_grade + 1) <= 150)
		this->_grade++;
	else
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(AForm &src)
{
	try
	{
		if (&src == (void *)NULL)
			std::cerr << "Error: invalid form" << std::endl;
		else
			src.beSigned(*this);
	}
	catch(const std::exception &exception)
	{
		std::cerr << this->getName() << " couldn't sign " << src.getName() << " because "
		<< exception.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm &src)
{
	try
	{
		if (&src == (void *)NULL)
			std::cerr << "Error: invalid form" << std::endl;
		else
		{
			src.execute(*this);
			std::cout << "Bureaucrat " << this->getName() << " executed " << src.getName() << std::endl;
		}
	}
	catch (const std::exception &exception)
	{
		std::cerr << "Bureaucrat " << this->getName() << " cannot execute " << src.getName() << " because "
		<< exception.what() << std::endl;
	}
}

std::ostream	&operator<<( std::ostream &ost, Bureaucrat const &b)
{
	ost << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (ost);
}
