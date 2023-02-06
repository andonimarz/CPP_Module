#include "Fixed.hpp"

int	main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

/* int	main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	b.setRawBits(10);
	std::cout << b.getRawBits() << std::endl;
	c.operator=(b);
	std::cout << c.getRawBits() << std::endl;
	b.setRawBits(11);
	c.setRawBits(b.getRawBits());
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
 */