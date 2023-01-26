/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:30:59 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/26 10:58:33 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	addContact(void);
		void	printContacts(void);
		void	getInfo(void);
		std::string	getbuff(std::string msg, int num) const;
		void	display(void);

	private:
		Contact contacts[8];
		std::string	info[5];
		int		size;
		int		index;
};