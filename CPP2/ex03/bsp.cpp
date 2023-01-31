#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>

typedef struct s_info
{
	float	AB;
	float	AC;
	float	BC;
	float	PA;
	float	PB;
	float	PC;
}				t_info;

float	distance(Point const a, Point const b)
{
	Fixed result = ((a.getX() - b.getX()) * (a.getX() - b.getX())) +
					((a.getY() - b.getY()) * (a.getY() - b.getY()));
	return (sqrt(result.toFloat()));
}

bool	check_dist(t_info info)
{
	std::cout << "AB " << info.AB << std::endl;
	std::cout << "AC " << info.AC << std::endl;
	std::cout << "BC " << info.BC << std::endl;
	std::cout << "PA " << info.PA << std::endl;
	std::cout << "PB " << info.PB << std::endl;
	std::cout << "PC " << info.PC << std::endl;
	if (info.PA >= info.AB || info.PA >= info.AC ||
		info.PB >= info.AB || info.PB >= info.BC ||
		info.PC >= info.AC || info.PC >= info.BC)
		return (false);
	std::cout << "TRUE" << info.AB << std::endl;
	return (true);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	t_info info;
	
	info.AB = distance(a, b);
	info.AC = distance(a, c);
	info.BC = distance(b, c);
	info.PA = distance(point, a);
	info.PB = distance(point, b);
	info.PC = distance(point, c);
	return (check_dist(info));
}
