/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:58:41 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/31 21:27:54 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "Point.hpp"

//=== Default Constructor ======================================================
Point::Point() : x(0), y(0)
{
}

//=== Constructor 1 ============================================================
Point::Point(float const x, float const y) : x(x), y(y)
{
}

//=== Copy Constructor =========================================================
Point::Point(Point& point) : x(point.getX()), y(point.getY())
{
}

//=== X getter =================================================================
const Fixed&	Point::getX(void) const
{
	return (x);
}

//=== Y getter =================================================================
const Fixed&	Point::getY(void) const
{
	return (y);
}

//=== Copy Assignment Operator =================================================
Point&	Point::operator= (const Point& point)
{
	(void) point;
	return (*this);
}

//=== Destructor ===============================================================
Point::~Point()
{
}
