/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:04:33 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/07 09:04:34 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed( const Fixed &ref );
		Fixed	&operator=( const Fixed &ref );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

std::ostream	&operator<<( std::ostream &ost, Fixed const &instance);

#endif
