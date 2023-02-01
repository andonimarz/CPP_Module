#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point );

int main ( void )
{
	if ( bsp( Point(2, 2), Point(0, 30), Point(20, 0), Point(0, 30) ) == true )
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	return 0;
}
