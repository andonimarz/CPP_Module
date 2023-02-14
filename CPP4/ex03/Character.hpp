/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/13 15:04:12 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string name;
		AMateria	*materias[4];
	
	public:
		Character(void);
		Character(std::string name);
		Character(Character const &src);
		~Character(void);
		Character &operator=(const Character &src);
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int i);
		void use(int i, ICharacter &target);
};

#endif
