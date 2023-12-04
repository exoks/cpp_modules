/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:23:23 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/04 17:03:03 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "operations.hpp"

//====< main >==================================================================
int	main(void)
{
	int a = 2;
	int b = 3;
	
	::swap( a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (EXIT_SUCCESS);
}

//====< swap >==================================================================
template <typename T>
void	swap(T& x, T& y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

//====< min >===================================================================
template <typename T>
T	min(T x, T y)
{
	if (y <= x)
		return (y);
	return (x);
}

//====< max >===================================================================
template <typename T>
T	max(T x, T y)
{
	if (y >= x)
		return (y);
	return (x);
}
