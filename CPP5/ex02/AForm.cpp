/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:00 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/21 13:49:02 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("No name"), _signGrade(150), _execGrade(150), _signed(0)
{
	std::cout << "AForm constructor" << std::endl;
}

AForm::AForm(int signGrade, int execGrade, std::string name) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(0)
{
	std::cout << "AForm constructor" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &src) : _name(src.getName()), _signed(src.getSigned()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	std::cout << "AForm copy constructor" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor" << std::endl;
}

AForm &AForm::operator=(const AForm &src)
{
	if (this != &src)
		this->_signed = src.getSigned();
	return (*this);
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

int	AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

void	AForm::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->_signGrade)
	{
		this->_signed = 1;
		std::cout << src.getName() << " signed " << this->getName() << std::endl;
	}
	else
		throw GradeTooLowException();
}

std::ostream	&operator<<( std::ostream &ost, AForm const &f)
{
	ost << f.getName() << " Aform. Sign status: " << f.getSigned() << ". Sign grade: "
		<< f.getSignGrade() << ". Exec Grade: " << f.getExecGrade();
	return (ost);
}
