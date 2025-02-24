/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:55:44 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/31 21:27:20 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class	Point
{
	private:
		Fixed const		x;
		Fixed const		y;

	public:
		Point();
		Point(Point& point);
		Point&	operator= (const Point& point);
		bool	operator> (const Point& point) const;
		~Point();
		Point(float const x, float const f);
		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
		
		
};

Fixed	extractCrossPoint(const Point& p1, const Point& p2, const Point& p);
bool	bsp(Point const a, Point const b, Point const c, Point point);
#endif
