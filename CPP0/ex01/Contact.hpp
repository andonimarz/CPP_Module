/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:31:13 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/26 10:40:29 by amarzana         ###   ########.fr       */
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

	int			index;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
};

#endif