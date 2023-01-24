/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:31:13 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/24 18:08:34 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact
{
public:
	Contact(void);
	~Contact(void);

	std::string	getFirstName(void) const;
	void		setFirstName(const std::string str);
	void		setInfo(int index);
	std::string	getbuff(std::string msg) const;
private:

	int			index;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
};

#endif