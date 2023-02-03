/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:56:30 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/03 13:56:34 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_HPP
# define INFO_HPP

#include <iostream>
#include <fstream>

class Info
{
	public:
		Info(char **argv);
		~Info();
		void	job(void);
	private:
		std::string	_inFile;
		std::string	_outFile;
		std::string _find;
		std::string _replace;
		std::string _str;
};

#endif
