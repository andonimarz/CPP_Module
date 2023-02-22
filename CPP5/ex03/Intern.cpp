/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:00 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/22 10:30:53 by amarzana         ###   ########.fr       */
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
			std::cerr << "Error: invalid form name" << std::endl;
			return (NULL);
		}
	}
}
