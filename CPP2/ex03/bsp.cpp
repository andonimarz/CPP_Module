/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:03:36 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/07 09:03:41 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed calculate_ponderation(Point const a, Point const b, Point const c, Point const point)
{
	//AB = SEGMENT BETWEEN A AND B.
	Point AB((b.getX().toFloat() - a.getX().toFloat()), 
			(b.getY().toFloat() - a.getY().toFloat()));

	//AC = SEGMENT BETWEEN A AND C.
	Point AC((c.getX().toFloat() - a.getX().toFloat()), 
			(c.getY().toFloat() - a.getY().toFloat()));

	//std::cout << "ABx = " << AB.getX() << " ABy = " << AB.getY() << std::endl;
	//std::cout << "ACx = " << AC.getX() << " ACy = " << AC.getY() << std::endl;

	//w = THE AB{0, 1} COORDINATE FOR POINT. 
	//IF w IS NEGATIVE OR BIGGER THAN 1 IT MEANS THAT point IS OUTSIDE THE TRIANGLE
	//IF w IS 0 OR 1 IT MEANS THAT point IS VERTEX OR point IS IN AN EDGE
	Fixed w;

	w = (AC.getX() * (a.getY() - point.getY()) + AC.getY() * (point.getX() - a.getX())) / 
		(AB.getX() * AC.getY() - AB.getY() * AC.getX());
	return (w);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed w1 = calculate_ponderation(a, b, c, point);
	Fixed w2 = calculate_ponderation(b, c, a, point);
	Fixed w3 = calculate_ponderation(c, a, b, point);

	//std::cout << "W1 = " << w1 << std::endl;
	//std::cout << "W2 = " << w2 << std::endl;
	//std::cout << "W3 = " << w3 << std::endl;

	if ((w1 > 0) && (w1 < 1) &&
		(w2 > 0) && (w2 < 1) &&
		(w3 > 0) && (w3 < 1))
		return (true);
	return (false);
}
