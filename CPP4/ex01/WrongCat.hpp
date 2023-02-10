/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:25:12 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/10 12:49:35 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &src);
		~WrongCat();
		WrongCat		&operator=(const WrongCat &src);
		void	makeSound(void) const;
};

#endif
