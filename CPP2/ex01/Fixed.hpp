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
		Fixed( const int n );
		Fixed( const float n );
		~Fixed();
		Fixed( const Fixed &ref );
		Fixed	&operator=( const Fixed &ref );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream & operator<<( std::ostream &ost, Fixed const &instance );

#endif
