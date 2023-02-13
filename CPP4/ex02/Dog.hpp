/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:24:46 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 14:00:50 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();
		Dog		&operator=(const Dog &src);
		virtual void	makeSound(void) const;
};

#endif
