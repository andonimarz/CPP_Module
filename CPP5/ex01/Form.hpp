/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:11 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/17 14:28:06 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
	public:
		Form();
		Form(int signGrade, int execGrade, std::string name);
		Form(const Form &src);
		~Form();
		Form			&operator=(const Form &src);
		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;
		void			beSigned(Bureaucrat &src);

	class GradeTooHighException : public std::exception
	{
        virtual const char* what() const throw()
		{
            return ("Grade is too high");
        }
    };
    class GradeTooLowException : public std::exception
	{
        virtual const char* what() const throw()
		{
            return ("Grade is too low");
        }
	};
};

std::ostream	&operator<<( std::ostream &ost, Form const &f);

#endif
