#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point );

int main ( void )
{
    if ( bsp( Point(0, 0), Point(0, 30), Point(20, 0), Point(10, 1) ) == true )
        std::cout << "The point is inside the triangle" << std::endl;
	else
        std::cout << "The point is outside the triangle" << std::endl;
    return 0;
}
