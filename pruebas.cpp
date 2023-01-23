/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:49:39 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/23 15:21:56 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class	Sample
{
public:

	Sample(void); // CPP use the name of the class for constructor
	~Sample(void); // and the name of the class for destructor
}; // don't forget to end with semicolon

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	main(void)
{
	// the line below instantiate an instance
	// code in constructor will also run (to initialise data for instance)
	Sample	instance;
	return (0);
	// destructor is called when the instance goes out of scope
}
