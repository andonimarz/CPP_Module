/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:25:12 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 12:49:35 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		Cat		&operator=(const Cat &src);
		virtual void	makeSound(void) const;
};

#endif
