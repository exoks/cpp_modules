/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:29:55 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/31 21:28:13 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

//=== Main Function ============================================================
int	main(void)
{
	std::string s[2] = {"Outside triangle", "InSide triangle"};
	Point a(5, 4);
	Point b(3, 2);
	Point c(6, 1);

	Point	p0(4, 2);	
	std::cout << "Point(4, 2) : " << s[bsp(a, b, c, p0)] << std::endl;

	Point	p1(8, 2);	
	std::cout << "Point(8, 2) : " << s[bsp(a, b, c, p1)] << std::endl;


	Point	p2(2, 1);	
	std::cout << "Point(2, 1) : " << s[bsp(a, b, c, p2)] << std::endl;

	Point	p3(8, 1);	
	std::cout << "Point(8, 1) : " << s[bsp(a, b, c, p3)] << std::endl;
	return (EXIT_SUCCESS);
}
