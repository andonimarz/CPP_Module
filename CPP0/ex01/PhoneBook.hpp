/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:30:59 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/03 08:49:51 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		_contacts[8];
		std::string	_info[5];
		int			_index;
		void		_getInfo(void);
		std::string	_getbuff(std::string msg, int num) const;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void		addContact(void);
		void		printContacts(void);
		void		display(void);
};

#endif
