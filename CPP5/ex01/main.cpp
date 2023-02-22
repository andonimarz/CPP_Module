/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:30:25 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/22 09:44:20 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	b1(1, "Big_boss");
		Bureaucrat	b2(50, "Senior_Bureauc");
		Bureaucrat	b3(150, "Junior_Bureauc");

		std::cout << std::endl << "----- FORMS -----" << std::endl;
		Form f1(10, 10, "Paper10");
		Form f2(100, 100, "Paper100");
		Form f3(f1);
		//Form f4(0, 151, "badForm");			//Grades < 1 and > 150

		std::cout << std::endl << "----- Test 1: Big_boss signs Paper10 -----" << std::endl;
		std::cout << f1 << std::endl;
		std::cout << "Copy: " << f3 << std::endl;
		b1.signForm(f1);
		std::cout << f1 << std::endl;
		std::cout << "Copy: " << f3 << std::endl;

		std::cout << std::endl << "----- Test 2 -----" << std::endl;
		std::cout << f2 << std::endl;
		std::cout << b3 << std::endl;
		b3.signForm(f2);
		std::cout << f2 << std::endl;
		std::cout << b2 << std::endl;
		b2.signForm(f2);
		std::cout << f2 << std::endl;

		std::cout << std::endl << "----- Test 3 -----" << std::endl;
		Form *f5 = NULL;
		std::cout << f5 << std::endl;
		b1.signForm(*f5);

		std::cout << std::endl << "===== That's all =====" << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << std::endl << "===== An exception occurred! =====" << std::endl;
		std::cout << "-> " << exception.what() << std::endl;
		std::cout << "==================================" << std::endl << std::endl;

	}
	return (0);
}
