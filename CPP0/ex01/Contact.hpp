/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:31:13 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/26 13:01:34 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void		setInfo(int index, std::string *info);
		std::string truncInfo(std::string info) const;
		void		displayList(void);
		void		displayContact(void);
	private:
		int			_index;
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string	_PhoneNumber;
		std::string	_DarkestSecret;
};

#endif