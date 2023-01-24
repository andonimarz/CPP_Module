/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:30:59 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/24 22:03:42 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	addcontact(void);
		void	print(void);
		void	printcontacts(void);
		//void	search(void) const;

	private:
		Contact contacts[8];
		int		size;
		int		index;
};