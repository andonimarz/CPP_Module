/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:30:25 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/20 17:30:53 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bureaucrat(1, "Big_boss");
		AForm *scf;
		AForm *rrf;
		AForm *ppf;
		AForm *badForm;
		Intern intern;

		std::cout << std::endl << "===== First part: intern creates forms =====" << std::endl << std::endl;
		scf = intern.makeForm("shrubbery request", "Drawing");
		rrf = intern.makeForm("robotomy request", "Human");
		ppf = intern.makeForm("presidential request", "Prisoner");
		badForm = intern.makeForm("this shouldn't work", "invalid target");

		std::cout << std::endl << "===== Second part: bureaucrat signs forms =====" << std::endl << std::endl;
		bureaucrat.signForm(*scf);
		bureaucrat.signForm(*rrf);
		bureaucrat.signForm(*ppf);
		bureaucrat.signForm(*badForm);

		std::cout << std::endl << "===== Third part: bureaucrat execs forms =====" << std::endl << std::endl;
		bureaucrat.executeForm(*scf);
		bureaucrat.executeForm(*rrf);
		bureaucrat.executeForm(*ppf);
		bureaucrat.executeForm(*badForm);
		std::cout << std::endl << "===== Deleting *ptrs =====" << std::endl << std::endl;
		if (scf)
			delete scf;
		if (rrf)
			delete rrf;
		if (ppf)
			delete ppf;
		if (badForm)
			delete badForm;
		std::cout << std::endl << "===== That's all! =====" << std::endl << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << std::endl << "===== An exception occurred! =====" << std::endl;
		std::cout << "-> " << exception.what() << std::endl;
		std::cout << "==================================" << std::endl << std::endl;
	}
	return (0);
}
