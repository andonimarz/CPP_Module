/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:11 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/17 11:31:46 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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

std::ostream	&operator<<( std::ostream &ost, Bureaucrat const &b);

#endif
