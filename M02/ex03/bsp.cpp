/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 21:25:57 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/31 21:26:55 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "Point.hpp"

//=== extractCrossPoint ========================================================
Fixed	extractCrossPoint(const Point& p1, const Point& p2, const Point& p)
{
	float	slop;
	float	yIntercept;

	if (p1.getX() < p2.getX())
	{
		slop = p2.getY().toFloat() - p1.getY().toFloat();
		slop /= p2.getX().toFloat() - p1.getX().toFloat();
	}
	else
	{
		slop = p1.getY().toFloat() - p2.getY().toFloat();
		slop /= p1.getX().toFloat() - p2.getX().toFloat();
	}
	yIntercept = p1.getY().toFloat() - (slop * p1.getX().toFloat());
	return (Fixed((p.getY().toFloat() - yIntercept) / slop));
}

//=== bsp function =============================================================
bool	bsp(Point const a, Point const b, Point const c, Point const p)
{
	const Fixed	maxY(Fixed::max(Fixed::max(a.getY(), b.getY()), c.getY()));
	const Fixed minY(Fixed::min(Fixed::min(a.getY(), b.getY()), c.getY()));
	const Point	*v[3] = {&a, &b, &c};
	int			cross = 0;
	int			i;

	i  = -1;
	while (++i < 3)
	{
		if (extractCrossPoint(*v[i], *v[(i + 1) % 3], p) > p.getX()
				&& p.getY() < maxY && p.getY() > minY)
			cross++;
	}
	return (cross % 2 && cross);
}
