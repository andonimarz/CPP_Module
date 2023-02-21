/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:00 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/20 14:13:15 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor" << std::endl;
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string options [3] = {"shrubbery request", "robotomy request", "presidential request"};
	AForm	*ptr;
	int		i;
	
	for (i = 0; i < 3; i++)
		if (name == options[i])
			break ;
	switch (i)
	{
		case (0):
		{
			std::cout << "Intern creates " << name << std::endl;
			return (ptr = new ShrubberyCreationForm(target));
		}
		case (1):
		{
			std::cout << "Intern creates " << name << std::endl;
			return (ptr = new RobotomyRequestForm(target));
		}
		case (2):
		{
			std::cout << "Intern creates " << name << std::endl;
			return (ptr = new PresidentialPardonForm(target));
		}
		default:
		{
			std::cout << "Error: invalid form name" << std::endl;
			return (NULL);
		}
	}
}
