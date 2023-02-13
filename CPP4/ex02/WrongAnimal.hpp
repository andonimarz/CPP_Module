/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:11 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 13:07:48 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string		type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &src);
		~WrongAnimal();
		WrongAnimal	&operator=(const WrongAnimal &src);
		std::string		getType(void) const;
		void	makeSound(void) const;
};

#endif
