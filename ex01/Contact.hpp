/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:31:13 by amarzana          #+#    #+#             */
/*   Updated: 2023/01/23 18:44:00 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
public:

	int publicFoo;

	Contact(void);
	~Contact(void);

	void publicBar(void) const;

private:

	char	*firstname;
	char	*lastname;
	char	*nickname;
	char	*phonenumber;
	char	*darkestsecret;
};

#endif