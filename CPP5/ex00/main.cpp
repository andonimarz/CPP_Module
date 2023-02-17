/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:30:25 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/17 12:09:22 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	b1(2, "Big_boss");			// Grade 1 for GradeTooHighException
		Bureaucrat	b2(50, "Senior_Bureauc.");
		Bureaucrat	b3(149, "Junior_Bureauc.");	// Grade 150 for GradeTooLowException
		//Bureaucrat	b4(151, "Bad_b");
		//Bureaucrat	b4(0, "Bad_b");
		Bureaucrat	b5(b2);
		std::cout << std::endl << "----- First test -----" << std::endl << std::endl;
		std::cout << b2 << std::endl;
		std::cout << "Copy: " << b5 << std::endl;
		b2.decGrade();
		std::cout << "After decGrade(): " << b2 << std::endl;
		b2.decGrade();
		std::cout << "After decGrade(): " << b2 << std::endl;
		std::cout << "Copy: " << b5 << std::endl;
		b2.incGrade();
		std::cout << "After incGrade(): " << b2 << std::endl;
		b2.incGrade();
		std::cout << "After incGrade(): " << b2 << std::endl;
		b2 = b1;
		std::cout << "After operator=: " << b2 << std::endl;
		std::cout << std::endl << "----- Second test -----" << std::endl << std::endl;
		std::cout << b1 << std::endl;
		b1.incGrade();
		std::cout << "After incGrade(): " << b1 << std::endl;
		std::cout << std::endl << "----- Third test -----" << std::endl << std::endl;
		std::cout << b3 << std::endl;
		b3.decGrade();
		std::cout << "After decGrade(): " << b3 << std::endl;
		std::cout << std::endl << "===== That's all. No exceptions! =====" << std::endl << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << std::endl << "===== An exception occurred! =====" << std::endl;
		std::cout << "-> " << exception.what() << std::endl;
		std::cout << "==================================" << std::endl << std::endl;

	}
	return (0);
}