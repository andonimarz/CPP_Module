/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:00 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/17 14:31:21 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("No name"), _signGrade(150), _execGrade(150), _signed(0)
{
	std::cout << "Form constructor" << std::endl;
}

Form::Form(int signGrade, int execGrade, std::string name) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(0)
{
	std::cout << "Form constructor" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSigned()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	std::cout << "Form copy constructor" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor" << std::endl;
}

Form &Form::operator=(const Form &src)
{
	if (this != &src)
		this->_signed = src.getSigned();
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

void	Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->_signGrade)
	{
		this->_signed = 1;
		std::cout << src.getName() << " signed " << this->getName() << std::endl;
	}
	else
		throw GradeTooLowException();
}

std::ostream	&operator<<( std::ostream &ost, Form const &f)
{
	ost << f.getName() << " form. Sign status: " << f.getSigned() << ". Sign grade: "
		<< f.getSignGrade() << ". Exec Grade: " << f.getExecGrade() << std::endl;
	return (ost);
}
