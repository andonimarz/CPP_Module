/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:00 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/21 13:49:57 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(145, 137, "ShrubberyCreationForm"), _target("No_target")
{
	std::cout << "ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(145, 137, "ShrubberyCreationForm"), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : _target(src._target)
{
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

const ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &_executor) const
{
	if (_executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	if (this->getSigned() == 0)
		throw FormNotSignedException();
	std::ofstream	file(this->_target + "_shrubbery");
	file << "          &&& &&  & &&" << std::endl;
	file << "      && &//&**& ()|/ @, &&" << std::endl;
	file << "      &&&(/&/&||/& /_/)_&/_&" << std::endl;
	file << "   &() &##&|()|/&## '%, & ()" << std::endl;
	file << "  &_/_&&_/ |& |&&/&__%_/_& &&" << std::endl;
	file << "&&   && & &| &| /& & % ()& /&&" << std::endl;
	file << " ()&_---()&/&/|&&-&&--%---()~" << std::endl;
	file << "   &&       @}{/" << std::endl;
	file << "            }}{" << std::endl;
	file << "           /}}{," << std::endl;
	file << "      , -=-~{ .-^- _" << std::endl;
	file.close();
}
