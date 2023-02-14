/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/14 09:37:03 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(std::string const &type);
		~Cure(void);
		Cure &operator=(const Cure &src);
		std::string const &getType() const;
		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif
