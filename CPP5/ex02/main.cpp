/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:30:25 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/22 10:14:22 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	b1(1, "Big_boss");
		Bureaucrat	b2(50, "Senior_Bureauc.");
		Bureaucrat	b3(150, "Junior_Bureauc.");
	
		// AForm af("bad_form");					// Not allowed because now is abstract
		
		std::cout << std::endl << "----- ShrubberyCreationForm -----" << std::endl;
		AForm	*scf = new ShrubberyCreationForm("Drawing");
		std::cout << *scf << std::endl;
		//===== low grade exception in sign =====
		std::cout << "----- Junior tries to sign -----" << std::endl;
		b3.signForm(*scf);
		//===== not signed exception in exec =====
		std::cout << "----- Senior tries to exec -----" << std::endl;
		b2.executeForm(*scf);
		std::cout << *scf << std::endl;
		//===== Comment this for a not signed exception in exec =====
		std::cout << "----- Senior signs ShrubberyCreation -----" << std::endl;
		b2.signForm(*scf);
		std::cout << *scf << std::endl;
		//===========================================================
		//===== low grade exception in exec =====
		std::cout << "----- Junior tries to exec -----" << std::endl;
		b3.executeForm(*scf);
		std::cout << "----- Senior execs Shrubbery -----" << std::endl;
		b2.executeForm(*scf);
		delete scf;

		std::cout << std::endl << "----- RobotomyRequestForm -----" << std::endl;
		AForm	*rrf = new RobotomyRequestForm("Human");
		std::cout << *rrf << std::endl;
		//===== low grade exception in sign =====
		std::cout << "----- Junior tries to sign -----" << std::endl;
		b3.signForm(*rrf);
		std::cout << *rrf << std::endl;
		//===== Comment this for a not signed exception in exec =====
		std::cout << "----- Senior signs RobotomyRequest -----" << std::endl;
		b2.signForm(*rrf);
		std::cout << *rrf << std::endl;
		//===== low grade exception in exec =====
		std::cout << "----- Senior tries to exec -----" << std::endl;
		b2.executeForm(*rrf);
		std::cout << "----- Boss execs RobotomyRequest -----" << std::endl;
		b1.executeForm(*rrf);
		delete rrf;

		std::cout << std::endl << "----- PresidentialPardonForm -----" << std::endl;
		AForm	*ppf = new PresidentialPardonForm("Prisoner");
		std::cout << *ppf << std::endl;
		//===== low grade exception in sign =====
		std::cout << "----- Senior tries to sign -----" << std::endl;
		b2.signForm(*ppf);
		std::cout << *ppf << std::endl;
		//===== Comment this for a not signed exception in exec =====
		std::cout << "----- Boss signs PresidentialPardon -----" << std::endl;
		b1.signForm(*ppf);
		std::cout << *ppf << std::endl;
		//===== low grade exception in exec =====
		std::cout << "----- Senior tries to exec -----" << std::endl;
		b2.executeForm(*ppf);
		std::cout << "----- Boss execs PresidentialPardon -----" << std::endl;
		b1.executeForm(*ppf);
		delete ppf;
		std::cout << std::endl << "----- That's all! -----" << std::endl << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << std::endl << "===== An exception occurred! =====" << std::endl;
		std::cout << "-> " << exception.what() << std::endl;
		std::cout << "==================================" << std::endl << std::endl;

	}
	return (0);
}