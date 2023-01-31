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
		bool	operator>( const Fixed &ref ) const;
		bool	operator<( const Fixed &ref ) const;
		bool	operator>=( const Fixed &ref ) const;
		bool	operator<=( const Fixed &ref ) const;
		bool	operator==( const Fixed &ref ) const;
		bool	operator!=( const Fixed &ref ) const;
		Fixed	operator+( const Fixed &ref ) const;
		Fixed	operator-( const Fixed &ref ) const;
		Fixed	operator*( const Fixed &ref ) const;
		Fixed	operator/( const Fixed &ref ) const;
		Fixed	&operator++( void );
		Fixed	operator++( int );
		Fixed	&operator--( void );
		Fixed	operator--( int );
		static Fixed& min( Fixed &a, Fixed &b );
		static const Fixed& min( const Fixed &a, const Fixed &b );
		static Fixed& max( Fixed &a, Fixed &b );
		static const Fixed& max( const Fixed &a, const Fixed &b );
};

std::ostream & operator<<( std::ostream &ost, Fixed const &instance );

#endif
