/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:11 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/22 10:19:16 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();
		Bureaucrat		&operator=(const Bureaucrat &src);
		std::string		getName(void) const;
		int				getGrade(void) const;
		void			incGrade(void);
		void			decGrade(void);
		void			signForm(AForm &src);
		void 			executeForm(const AForm &src);

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
};

std::ostream	&operator<<( std::ostream &ost, Bureaucrat const &b);

#endif
