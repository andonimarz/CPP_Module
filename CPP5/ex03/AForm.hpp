/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:11 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/18 11:25:20 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;

	public:
		AForm();
		AForm(int signGrade, int execGrade, std::string name);
		AForm(const AForm &src);
		virtual			~AForm();
		AForm			&operator=(const AForm &src);
		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;
		void			beSigned(Bureaucrat &src);
		virtual void	execute(const Bureaucrat &_executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Grade is too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Grade is too low");
		}
	};

	class FormNotSignedException : public std::exception
	{
		const char *what() const throw()
		{
			return ("Form not signed");
		}
	};
};

std::ostream	&operator<<( std::ostream &ost, AForm const &f);

#endif
